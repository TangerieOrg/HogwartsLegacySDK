#pragma once
#include <cstdint>
#include "EEEnemyAISizeCategory.hpp"
#include "UDataAsset.hpp"
class UEnemyAIPathCheckPropertyData;
#pragma pack(push, 1)
class UEnemyAIPropertyData : public UDataAsset {
public:
    EEEnemyAISizeCategory m_sizeCategory; // 0x30
    char pad_31[0x3];
    float RotationRate; // 0x34
    float FleeFixedDistance; // 0x38
    char pad_3c[0x4];
    UEnemyAIPathCheckPropertyData* PathCheckPtr; // 0x40
    static UEnemyAIPropertyData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
