#pragma once
#include <cstdint>
#include "FCreatureGaitMotionData.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreature_MotionTable : public UDataAsset {
public:
    FCreatureGaitMotionData GaitMotionData[4]; // 0x30
    bool bUsingTurnAssist; // 0x70
    char pad_71[0x7];
    static UCreature_MotionTable* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
