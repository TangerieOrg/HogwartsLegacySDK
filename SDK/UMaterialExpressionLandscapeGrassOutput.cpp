#include "FGrassInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#include "UMaterialExpressionLandscapeGrassOutput.hpp"
UMaterialExpressionLandscapeGrassOutput* UMaterialExpressionLandscapeGrassOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput");
    return (UMaterialExpressionLandscapeGrassOutput*)res;
}
