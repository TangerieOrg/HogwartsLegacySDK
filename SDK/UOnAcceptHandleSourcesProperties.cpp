#include "EHandleSourcesMethod.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UOnAcceptHandleSourcesProperties.hpp"
UOnAcceptHandleSourcesProperties* UOnAcceptHandleSourcesProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.OnAcceptHandleSourcesProperties");
    return (UOnAcceptHandleSourcesProperties*)res;
}
