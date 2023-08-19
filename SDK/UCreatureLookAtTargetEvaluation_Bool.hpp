#pragma once
#include <cstdint>
#include "UCreatureLookAtTargetEvaluation.hpp"
#pragma pack(push, 1)
class UCreatureLookAtTargetEvaluation_Bool : public UCreatureLookAtTargetEvaluation {
public:
    float Multiplier; // 0x28
    bool bInverse; // 0x2c
    char pad_2d[0x3];
    static UCreatureLookAtTargetEvaluation_Bool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
