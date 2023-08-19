#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_OnScreenAggro : public UCogGroupEvaluation {
public:
    float ScreenBorder; // 0x30
    float OffscreenMultiplier; // 0x34
    static UCogGroupEvaluation_OnScreenAggro* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
