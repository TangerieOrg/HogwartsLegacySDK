#include "UObject.hpp"
#include "UTimeRigElement.hpp"
#include "UTimeRigElementState.hpp"
#include "UTimeRigInstanceContext.hpp"
UTimeRigElementState* UTimeRigElementState::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigElementState");
    return (UTimeRigElementState*)res;
}
