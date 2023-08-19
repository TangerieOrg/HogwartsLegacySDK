#include "UTimeRigIntervalState.hpp"
#include "UTimeRigState.hpp"
UTimeRigState* UTimeRigState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigState");
    return (UTimeRigState*)res;
}
