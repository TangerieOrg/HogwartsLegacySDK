#include "UObject.hpp"
#include "UTimeRigEvent.hpp"
UTimeRigEvent* UTimeRigEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigEvent");
    return (UTimeRigEvent*)res;
}
