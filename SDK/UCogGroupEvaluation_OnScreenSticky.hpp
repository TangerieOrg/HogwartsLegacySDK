#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_OnScreenSticky : public UCogGroupEvaluation {
public:
    float ScreenBorder; // 0x30
    char pad_34[0x4];
    static UCogGroupEvaluation_OnScreenSticky* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
