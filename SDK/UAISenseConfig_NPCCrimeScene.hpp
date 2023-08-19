#pragma once
#include <cstdint>
#include "UAISenseConfig_NPC.hpp"
class UClass;
class UNPC_CrimeSceneSenseAsset;
#pragma pack(push, 1)
class UAISenseConfig_NPCCrimeScene : public UAISenseConfig_NPC {
public:
    UClass* Implementation; // 0x60
    UNPC_CrimeSceneSenseAsset* SenseAsset; // 0x68
    float PerceiveRadius; // 0x70
    float LoseRadius; // 0x74
    float HeightDifference; // 0x78
    float EvaluateInterval; // 0x7c
    static UAISenseConfig_NPCCrimeScene* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
