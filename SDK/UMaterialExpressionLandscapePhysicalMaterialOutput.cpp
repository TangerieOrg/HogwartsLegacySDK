#include "FPhysicalMaterialInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionLandscapePhysicalMaterialOutput.hpp"
UMaterialExpressionLandscapePhysicalMaterialOutput* UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput");
    return (UMaterialExpressionLandscapePhysicalMaterialOutput*)res;
}
