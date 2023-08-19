#include "ETimeRigExternalEventConstraint.hpp"
#include "UTimeRigEvent.hpp"
#include "UTimeRigExternalEvent.hpp"
UTimeRigExternalEvent* UTimeRigExternalEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigExternalEvent");
    return (UTimeRigExternalEvent*)res;
}
