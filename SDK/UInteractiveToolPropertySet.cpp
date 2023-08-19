#include "UInteractiveToolPropertySet.hpp"
#include "UObject.hpp"
UInteractiveToolPropertySet* UInteractiveToolPropertySet::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet");
    return (UInteractiveToolPropertySet*)res;
}
