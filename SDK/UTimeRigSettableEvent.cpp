#include "UInterface.hpp"
#include "UTimeRigSettableEvent.hpp"
UTimeRigSettableEvent* UTimeRigSettableEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigSettableEvent");
    return (UTimeRigSettableEvent*)res;
}
