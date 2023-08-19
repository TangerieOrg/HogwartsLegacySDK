#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UClass;
class AMunitionType_AOE_MultiFX;
class AActor;
#pragma pack(push, 1)
class AIncendioSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> FlameFX2; // 0x870
    float CharacterDamageScale; // 0x880
    char pad_884[0x4];
    UClass* AOEMunition; // 0x888
    char pad_890[0x8];
    AMunitionType_AOE_MultiFX* CurrentAOE; // 0x898
    TArray<AActor*> AOEIgnoreList; // 0x8a0
    static AIncendioSpellTool* StaticClass();
}; // Size: 0x8b0
#pragma pack(pop)
