#include "UTimeRigChainState.hpp"
#include "UTimeRigIntervalState.hpp"
UTimeRigChainState* UTimeRigChainState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigChainState");
    return (UTimeRigChainState*)res;
}
