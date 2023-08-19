#include "FTimeRigEventReference.hpp"
#include "UFloatProvider.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigRelativePlusEvent.hpp"
UTimeRigRelativePlusEvent* UTimeRigRelativePlusEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigRelativePlusEvent");
    return (UTimeRigRelativePlusEvent*)res;
}
