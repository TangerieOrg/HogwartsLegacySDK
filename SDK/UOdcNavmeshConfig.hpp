#pragma once
#include <cstdint>
#include "FOdcCollisionAreaUsageFlag.hpp"
#include "FOdcCollisionChannelSet.hpp"
#include "FOdcFlags.hpp"
#include "FOdcFlagsDefinition.hpp"
#include "FOdcGeometryMetrics.hpp"
#include "FOdcLayerConfig.hpp"
#include "FOdcSlopeAreaUsageFlag.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UOdcNavmeshConfig : public UObject {
public:
    FOdcCollisionChannelSet CollisionChannelsAffectingNavmesh; // 0x28
    FOdcFlags DefaultAreaUsageFlags; // 0x2c
    FOdcFlags CrouchAreaUsageFlags; // 0x30
    FOdcFlags DeepWaterAreaUsageFlags; // 0x34
    FOdcFlags ShallowWaterAreaUsageFlags; // 0x38
    float DefaultPenaltyMultiplier; // 0x3c
    FString MarkupCollisionPreset; // 0x40
    TArray<FOdcCollisionAreaUsageFlag> CollisionAreaUsageFlags; // 0x50
    TArray<FOdcSlopeAreaUsageFlag> SlopeAreaUsageFlags; // 0x60
    FOdcLayerConfig LayerConfigs[32]; // 0x70
    FOdcFlagsDefinition AreaUsage; // 0x1f0
    FOdcFlagsDefinition LinkUsage; // 0x200
    FOdcFlagsDefinition ObstacleBlockage; // 0x210
    FOdcGeometryMetrics GeometryMetrics; // 0x220
    float DefaultDrawDisttance; // 0x234
    static UOdcNavmeshConfig* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
