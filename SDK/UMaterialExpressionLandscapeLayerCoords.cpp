#include "ELandscapeCustomizedCoordType.hpp"
#include "ETerrainCoordMappingType.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionLandscapeLayerCoords.hpp"
UMaterialExpressionLandscapeLayerCoords* UMaterialExpressionLandscapeLayerCoords::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords");
    return (UMaterialExpressionLandscapeLayerCoords*)res;
}
