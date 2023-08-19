#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_ScreenSpace : public UCogGroupEvaluation {
public:
    float ScreenDistance; // 0x30
    char pad_34[0x4];
    static UCogGroupEvaluation_ScreenSpace* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
