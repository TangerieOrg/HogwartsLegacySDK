#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UEnemyAIPathCheckPropertyData : public UDataAsset {
public:
    float MinTime; // 0x30
    float MaxTime; // 0x34
    float StartOffset; // 0x38
    float MaxDist; // 0x3c
    float AttackPosLockLocTime; // 0x40
    float SwappedLockLocTime; // 0x44
    float OpeningLockLocTime; // 0x48
    bool UseSweepSphere; // 0x4c
    char pad_4d[0x3];
    float SweepSphereRadius; // 0x50
    char pad_54[0x4];
    static UEnemyAIPathCheckPropertyData* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
