#pragma once
#include <cstdint>
#include "UCogGroupEvaluation.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_Health : public UCogGroupEvaluation {
public:
    float HealthMin; // 0x30
    char pad_34[0x4];
    static UCogGroupEvaluation_Health* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
