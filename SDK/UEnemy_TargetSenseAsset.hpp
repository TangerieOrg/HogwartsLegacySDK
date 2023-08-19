#pragma once
#include <cstdint>
#include "FEnemy_TargetSense.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UEnemy_TargetSenseAsset : public UDataAsset {
public:
    FEnemy_TargetSense TargetSense; // 0x30
    static UEnemy_TargetSenseAsset* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
