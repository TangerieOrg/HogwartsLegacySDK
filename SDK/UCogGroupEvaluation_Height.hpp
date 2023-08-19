#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_Height : public UCogGroupEvaluation {
public:
    float NearHeightUp; // 0x30
    float NearHeightDown; // 0x34
    float FarHeightUp; // 0x38
    float FarHeightDown; // 0x3c
    bool bAdjustCenterHeightByCameraDirection; // 0x40
    char pad_41[0x7];
    static UCogGroupEvaluation_Height* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
