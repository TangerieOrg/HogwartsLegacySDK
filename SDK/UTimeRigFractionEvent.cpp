#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigFractionEvent.hpp"
UTimeRigFractionEvent* UTimeRigFractionEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigFractionEvent");
    return (UTimeRigFractionEvent*)res;
}
