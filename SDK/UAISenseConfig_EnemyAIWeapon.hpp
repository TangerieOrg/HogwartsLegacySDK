#pragma once
#include <cstdint>
#include "UAISenseConfig_NPC.hpp"
class UClass;
class APerceptionPointArea;
#pragma pack(push, 1)
class UAISenseConfig_EnemyAIWeapon : public UAISenseConfig_NPC {
public:
    UClass* Implementation; // 0x60
    bool bOverrideDistanceRequirement; // 0x68
    char pad_69[0x3];
    float PerceiveRadius; // 0x6c
    TArray<APerceptionPointArea*> PerceiveVolumeList; // 0x70
    static UAISenseConfig_EnemyAIWeapon* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
