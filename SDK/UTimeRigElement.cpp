#include "FTimeRigNamedSymbol.hpp"
#include "UObject.hpp"
#include "UTimeRigElement.hpp"
UTimeRigElement* UTimeRigElement::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigElement");
    return (UTimeRigElement*)res;
}
