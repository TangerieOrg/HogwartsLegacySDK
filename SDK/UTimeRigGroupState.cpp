#include "UTimeRigGroupState.hpp"
#include "UTimeRigIntervalState.hpp"
UTimeRigGroupState* UTimeRigGroupState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigGroupState");
    return (UTimeRigGroupState*)res;
}
