#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ERuntimeGenerationType.hpp"
#include "FNavDataConfig.hpp"
#include "FSupportedAreaData.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class ANavigationData : public AActor {
public:
    char pad_248[0x8];
    UPrimitiveComponent* RenderingComp; // 0x250
    FNavDataConfig NavDataConfig; // 0x258
    uint8_t bEnableDrawing : 1; // 0x2d0
    uint8_t bForceRebuildOnLoad : 1; // 0x2d0
    uint8_t bAutoDestroyWhenNoNavigation : 1; // 0x2d0
    uint8_t bCanBeMainNavData : 1; // 0x2d0
    uint8_t bCanSpawnOnRebuild : 1; // 0x2d0
    uint8_t bRebuildAtRuntime : 1; // 0x2d0
    uint8_t pad_bitfield_2d0_6 : 2;
    char pad_2d1[0x3];
    ERuntimeGenerationType RuntimeGeneration; // 0x2d4
    char pad_2d5[0x3];
    float ObservedPathsTickInterval; // 0x2d8
    uint32_t DataVersion; // 0x2dc
    char pad_2e0[0x108];
    TArray<FSupportedAreaData> SupportedAreas; // 0x3e8
    char pad_3f8[0x58];
    static ANavigationData* StaticClass();
}; // Size: 0x450
#pragma pack(pop)
