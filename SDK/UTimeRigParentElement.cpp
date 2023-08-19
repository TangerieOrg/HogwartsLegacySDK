#include "UInterface.hpp"
#include "UTimeRigParentElement.hpp"
UTimeRigParentElement* UTimeRigParentElement::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigParentElement");
    return (UTimeRigParentElement*)res;
}
