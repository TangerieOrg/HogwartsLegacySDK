#include "FTimeRigCoordinate.hpp"
#include "UTimeRigCustomEvent.hpp"
#include "UTimeRigEvent.hpp"
UTimeRigCustomEvent* UTimeRigCustomEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigCustomEvent");
    return (UTimeRigCustomEvent*)res;
}
