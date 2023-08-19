#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigLastOfEvent.hpp"
UTimeRigLastOfEvent* UTimeRigLastOfEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigLastOfEvent");
    return (UTimeRigLastOfEvent*)res;
}
