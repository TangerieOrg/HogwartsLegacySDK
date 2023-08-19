#pragma once
#include <cstdint>
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UAnimSharingTransitionInstance : public UAnimInstance {
public:
    char pad_2c0[0x8];
    float BlendTime; // 0x2c8
    bool bBlendBool; // 0x2cc
    char pad_2cd[0x3];
    static UAnimSharingTransitionInstance* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
