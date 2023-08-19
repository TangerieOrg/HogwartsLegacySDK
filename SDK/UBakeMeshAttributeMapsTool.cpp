#include "UBakeMeshAttributeMapsTool.hpp"
#include "UBakeMeshAttributeMapsToolProperties.hpp"
#include "UBakedCurvatureMapToolProperties.hpp"
#include "UBakedNormalMapToolProperties.hpp"
#include "UBakedOcclusionMapToolProperties.hpp"
#include "UBakedOcclusionMapVisualizationProperties.hpp"
#include "UBakedTexture2DImageProperties.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMultiSelectionTool.hpp"
#include "UTexture2D.hpp"
UBakeMeshAttributeMapsTool* UBakeMeshAttributeMapsTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakeMeshAttributeMapsTool");
    return (UBakeMeshAttributeMapsTool*)res;
}
