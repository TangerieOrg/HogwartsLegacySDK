#pragma once
#include <cstdint>
#include "USceneAction_AnimateCurves.hpp"
#pragma pack(push, 1)
class USceneAction_ModifyMaterials : public USceneAction_AnimateCurves {
public:
    char pad_a0[0xa0];
    bool bOnlyAnimateSwaps; // 0x140
    bool bKeyTimesArePercentages; // 0x141
    bool bHoldValues; // 0x142
    char pad_143[0x195];
    static USceneAction_ModifyMaterials* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
