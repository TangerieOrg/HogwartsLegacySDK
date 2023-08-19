#include "UTimeRigElementState.hpp"
#include "UTimeRigIntervalState.hpp"
UTimeRigIntervalState* UTimeRigIntervalState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigIntervalState");
    return (UTimeRigIntervalState*)res;
}
