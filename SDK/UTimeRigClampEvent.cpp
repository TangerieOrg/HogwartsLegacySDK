#include "FTimeRigCoordinate.hpp"
#include "FTimeRigEventReference.hpp"
#include "UTimeRigClampEvent.hpp"
#include "UTimeRigEvent.hpp"
UTimeRigClampEvent* UTimeRigClampEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigClampEvent");
    return (UTimeRigClampEvent*)res;
}
