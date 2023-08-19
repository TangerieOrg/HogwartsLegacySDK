#pragma once
#include <cstdint>
#include "ELandscapeCustomizedCoordType.hpp"
#include "ETerrainCoordMappingType.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression {
public:
    ETerrainCoordMappingType MappingType; // 0x40
    ELandscapeCustomizedCoordType CustomUVType; // 0x41
    char pad_42[0x2];
    float MappingScale; // 0x44
    float MappingRotation; // 0x48
    float MappingPanU; // 0x4c
    float MappingPanV; // 0x50
    char pad_54[0x4];
    static UMaterialExpressionLandscapeLayerCoords* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
