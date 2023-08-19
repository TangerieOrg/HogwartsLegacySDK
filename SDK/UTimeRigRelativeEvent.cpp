#include "FTimeRigCoordinate.hpp"
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigRelativeEvent.hpp"
UTimeRigRelativeEvent* UTimeRigRelativeEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigRelativeEvent");
    return (UTimeRigRelativeEvent*)res;
}
