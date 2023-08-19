#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_KeepInCone : public UBTDecorator {
public:
    float ConeHalfAngle; // 0x68
    char pad_6c[0x4];
    FBlackboardKeySelector ConeOrigin; // 0x70
    FBlackboardKeySelector Observed; // 0x98
    uint8_t bUseSelfAsOrigin : 1; // 0xc0
    uint8_t bUseSelfAsObserved : 1; // 0xc0
    uint8_t pad_bitfield_c0_2 : 6;
    char pad_c1[0x7];
    static UBTDecorator_KeepInCone* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
