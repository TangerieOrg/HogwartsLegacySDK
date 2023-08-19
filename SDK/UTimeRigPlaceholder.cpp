#include "UClass.hpp"
#include "UTimeRigElement.hpp"
#include "UTimeRigPlaceholder.hpp"
UTimeRigPlaceholder* UTimeRigPlaceholder::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigPlaceholder");
    return (UTimeRigPlaceholder*)res;
}
