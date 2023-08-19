#pragma once
#include <cstdint>
#include "ECollisionTraceFlag.hpp"
#include "FBodyInstance.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "UPrimitiveComponent.hpp"
class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;
class UAssetUserData;
#pragma pack(push, 1)
class UHoudiniAssetComponent : public UPrimitiveComponent {
public:
    char pad_480[0x8];
    uint8_t bGeneratedDoubleSidedGeometry : 1; // 0x488
    uint8_t pad_bitfield_488_1 : 7;
    char pad_489[0x7];
    UPhysicalMaterial* GeneratedPhysMaterial; // 0x490
    FBodyInstance DefaultBodyInstance; // 0x498
    ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x5f0
    char pad_5f1[0x3];
    int32_t GeneratedLightMapResolution; // 0x5f4
    float GeneratedLpvBiasMultiplier; // 0x5f8
    float GeneratedDistanceFieldResolutionScale; // 0x5fc
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x600
    int32_t GeneratedLightMapCoordinateIndex; // 0x610
    uint8_t bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x614
    uint8_t pad_bitfield_614_1 : 7;
    char pad_615[0x3];
    float GeneratedStreamingDistanceMultiplier; // 0x618
    char pad_61c[0x4];
    UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x620
    TArray<UAssetUserData*> GeneratedAssetUserData; // 0x628
    char pad_638[0x5d8];
    static UHoudiniAssetComponent* StaticClass();
    int32_t GetAssetId();
}; // Size: 0xc10
#pragma pack(pop)
