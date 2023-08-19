#include "FTimeRigEventReference.hpp"
#include "UFloatProvider.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigFractionPlusEvent.hpp"
UTimeRigFractionPlusEvent* UTimeRigFractionPlusEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigFractionPlusEvent");
    return (UTimeRigFractionPlusEvent*)res;
}
