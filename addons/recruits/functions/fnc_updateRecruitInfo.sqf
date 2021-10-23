/*
 * Author: AACO
 * Function used to update the recruit information
 * Should only be called from an event handler
 *
 * Examples:
 * [] call potato_recruits_fnc_updateRecruitInfo;
 *
 * Public: No
 */

#include "script_component.hpp"

TRACE_1("Params",_this);

BEGIN_COUNTER(GVAR(message));
if !(isNull MESSAGE_DISPLAY) then {

    // get all units in the player's group, check for changes in inPlayer for JIPs
    private _units = [];
    {
        if !(isNull _x) then {
            _units pushBack [_x, alive _x, isPlayer _x];
        };
        nil
    } count units (group player); // count used for speed, ensure `nil` is above this line

    TRACE_2("Groups", GVAR(oldSquad), _units);
    if !(GVAR(oldSquad) isEqualTo _units) then {
        GVAR(oldSquad) = _units;
        private _recruits = [];
        private _recruitCount = {
            _x params ["_unit", "_isAlive", "_isPlayer"];
            if (_isAlive && _isPlayer && {[_unit] call FUNC(isNotMember)}) then {
                _recruits pushBack (name _unit);
                true
            } else {
                false
            }
        } count _units;

        TRACE_2("Recruits",_recruits,_recruitCount);
        if (_recruitCount > 0) then {
            MESSAGE_CONTROL ctrlSetStructuredText parseText format [
                "<t size='0.75'>You have %1 in your group:<br/>%2<br/><br/>Say hello and make sure they know how to play!</t>",
                ["a new player", "some new players"] select (_recruitCount > 1),
                _recruits joinString "<br/>"
            ];
            MESSAGE_CONTROL ctrlSetPosition [
                0.88 * safezoneW + safezoneX,
                0.15 * safezoneH + safezoneY,
                0.105 * safezoneW,
                (2 + _recruitCount) * 0.017 * safezoneH
            ];
            MESSAGE_CONTROL ctrlCommit 0.25;
        } else {
            MESSAGE_CONTROL ctrlSetStructuredText parseText "";
            MESSAGE_CONTROL ctrlSetPosition [
                0.88 * safezoneW + safezoneX,
                0.15 * safezoneH + safezoneY,
                0.105 * safezoneW,
                0
            ];
            MESSAGE_CONTROL ctrlCommit 0.25;
        };
    };
};
END_COUNTER(GVAR(message));
