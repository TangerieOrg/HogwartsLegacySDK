#include "FTimeRigCoordinate.hpp"
#include "UTimeRigAutoEvent.hpp"
#include "UTimeRigEvent.hpp"
UTimeRigAutoEvent* UTimeRigAutoEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigAutoEvent");
    return (UTimeRigAutoEvent*)res;
}
