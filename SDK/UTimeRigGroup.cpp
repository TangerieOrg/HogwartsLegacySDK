#include "FLinearColor.hpp"
#include "UTimeRigElement.hpp"
#include "UTimeRigGroup.hpp"
#include "UTimeRigInterval.hpp"
UTimeRigGroup* UTimeRigGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigGroup");
    return (UTimeRigGroup*)res;
}
