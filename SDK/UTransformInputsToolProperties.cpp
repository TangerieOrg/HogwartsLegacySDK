#include "UInteractiveToolPropertySet.hpp"
#include "UTransformInputsToolProperties.hpp"
UTransformInputsToolProperties* UTransformInputsToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.TransformInputsToolProperties");
    return (UTransformInputsToolProperties*)res;
}
