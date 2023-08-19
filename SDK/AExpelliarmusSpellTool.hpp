#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#include "FGameplayTag.hpp"
class UClass;
#pragma pack(push, 1)
class AExpelliarmusSpellTool : public AFireOnceSpellTool {
public:
    float ScaleDisarmForce; // 0x870
    FGameplayTag SpecialDisarmTag; // 0x874
    float TalentProjectileDistance; // 0x87c
    float TalentProjectileIgnoreNearDistance; // 0x880
    float TalentProjectileDelay; // 0x884
    float TalentProjectileDamage; // 0x888
    int32_t TalentProjectileTargetHalfAngleXY; // 0x88c
    UClass* TalentProjectileMunition; // 0x890
    char pad_898[0x28];
    static AExpelliarmusSpellTool* StaticClass();
}; // Size: 0x8c0
#pragma pack(pop)
