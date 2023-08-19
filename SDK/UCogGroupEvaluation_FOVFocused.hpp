#pragma once
#include <cstdint>
#include "UCogGroupEvaluation_FOV.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_FOVFocused : public UCogGroupEvaluation_FOV {
public:
    float NotFocusedMultiplier; // 0x38
    float ScreenBorder; // 0x3c
    static UCogGroupEvaluation_FOVFocused* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
