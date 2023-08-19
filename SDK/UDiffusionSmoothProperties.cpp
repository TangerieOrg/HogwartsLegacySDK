#include "UDiffusionSmoothProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDiffusionSmoothProperties* UDiffusionSmoothProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DiffusionSmoothProperties");
    return (UDiffusionSmoothProperties*)res;
}
