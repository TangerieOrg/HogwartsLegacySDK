#include "FTimeRigCoordinate.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigSelfEvent.hpp"
UTimeRigSelfEvent* UTimeRigSelfEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigSelfEvent");
    return (UTimeRigSelfEvent*)res;
}
