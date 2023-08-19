#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
class UClass;
#pragma pack(push, 1)
class ACrucioSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> DamageFX2; // 0x870
    float TalentProjectileDistance; // 0x880
    float TalentProjectileIgnoreNearDistance; // 0x884
    float TalentProjectileDamage; // 0x888
    float TalentProjectileRandomHalfAngle; // 0x88c
    UClass* TalentProjectileMunition; // 0x890
    static ACrucioSpellTool* StaticClass();
}; // Size: 0x898
#pragma pack(pop)
