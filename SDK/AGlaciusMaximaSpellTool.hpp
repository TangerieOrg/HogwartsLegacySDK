#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UClass;
class UMultiFX2_Base;
#pragma pack(push, 1)
class AGlaciusMaximaSpellTool : public AFireOnceSpellTool {
public:
    UClass* GlaciusActorClass; // 0x870
    UClass* GlaciusImpactComponent; // 0x878
    UClass* GlaciusTerrainImpactComponent; // 0x880
    UClass* GlaciusPlatformClass; // 0x888
    UClass* SkinFX; // 0x890
    TArray<UMultiFX2_Base*> FrozenFX2; // 0x898
    float TerrainImpactZOffset; // 0x8a8
    char pad_8ac[0x4];
    static AGlaciusMaximaSpellTool* StaticClass();
}; // Size: 0x8b0
#pragma pack(pop)
