#include "EBakeScaleMethod.hpp"
#include "UBakeTransformToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBakeTransformToolProperties* UBakeTransformToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakeTransformToolProperties");
    return (UBakeTransformToolProperties*)res;
}
