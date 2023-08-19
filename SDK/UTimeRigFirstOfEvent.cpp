#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigFirstOfEvent.hpp"
UTimeRigFirstOfEvent* UTimeRigFirstOfEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigFirstOfEvent");
    return (UTimeRigFirstOfEvent*)res;
}
