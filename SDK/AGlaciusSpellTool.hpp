#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UClass;
class AActor;
#pragma pack(push, 1)
class AGlaciusSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> FrozenFX2; // 0x870
    TArray<UMultiFX2_Base*> EndFrozenFX2; // 0x880
    TArray<UMultiFX2_Base*> BreakoutFrozenFX2; // 0x890
    float TerrainImpactZOffset; // 0x8a0
    char pad_8a4[0x4];
    UClass* GlaciusTerrainImpactComponent; // 0x8a8
    UClass* GlaciusPlatformClass; // 0x8b0
    int32_t PlatformMax; // 0x8b8
    float PlatformLifetime; // 0x8bc
    float PlatformScale; // 0x8c0
    float PlatformScaleTime; // 0x8c4
    UClass* AOEMunition; // 0x8c8
    TArray<AActor*> GlaciusPlatforms; // 0x8d0
    char pad_8e0[0x20];
    static AGlaciusSpellTool* StaticClass();
}; // Size: 0x900
#pragma pack(pop)
