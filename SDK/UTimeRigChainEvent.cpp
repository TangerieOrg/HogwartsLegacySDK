#include "FTimeRigCoordinate.hpp"
#include "UTimeRigChainEvent.hpp"
#include "UTimeRigEvent.hpp"
UTimeRigChainEvent* UTimeRigChainEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigChainEvent");
    return (UTimeRigChainEvent*)res;
}
