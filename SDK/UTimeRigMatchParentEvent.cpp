#include "UTimeRigEvent.hpp"
#include "UTimeRigMatchParentEvent.hpp"
UTimeRigMatchParentEvent* UTimeRigMatchParentEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigMatchParentEvent");
    return (UTimeRigMatchParentEvent*)res;
}
