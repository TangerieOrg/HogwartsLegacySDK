#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_ConeCheck : public UBTDecorator {
public:
    float ConeHalfAngle; // 0x68
    char pad_6c[0x4];
    FBlackboardKeySelector ConeOrigin; // 0x70
    FBlackboardKeySelector ConeDirection; // 0x98
    FBlackboardKeySelector Observed; // 0xc0
    char pad_e8[0x8];
    static UBTDecorator_ConeCheck* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
