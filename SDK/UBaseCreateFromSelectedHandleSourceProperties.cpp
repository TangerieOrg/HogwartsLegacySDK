#include "EBaseCreateFromSelectedTargetType.hpp"
#include "UBaseCreateFromSelectedHandleSourceProperties.hpp"
#include "UOnAcceptHandleSourcesProperties.hpp"
UBaseCreateFromSelectedHandleSourceProperties* UBaseCreateFromSelectedHandleSourceProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties");
    return (UBaseCreateFromSelectedHandleSourceProperties*)res;
}
