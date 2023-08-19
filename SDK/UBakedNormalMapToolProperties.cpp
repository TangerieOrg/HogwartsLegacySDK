#include "UBakedNormalMapToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBakedNormalMapToolProperties* UBakedNormalMapToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakedNormalMapToolProperties");
    return (UBakedNormalMapToolProperties*)res;
}
