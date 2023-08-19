#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UControlRig.hpp"
#pragma pack(push, 1)
class UCR_Biped_C : public UControlRig {
public:
    FTransform LeftFootTransform; // 0x650
    FTransform LeftToeTransform; // 0x680
    FTransform RightFootTransform; // 0x6b0
    FTransform RightToeTransform; // 0x6e0
    FTransform HipTransform; // 0x710
    float LeftFootAlpha; // 0x740
    float RightFootAlpha; // 0x744
    float HipAlpha; // 0x748
    float AimAlpha; // 0x74c
    FVector AimTarget; // 0x750
    char pad_75c[0x4];
    FTransform LeftHandTransform; // 0x760
    FTransform RightHandTransform; // 0x790
    float LeftHandAlpha; // 0x7c0
    float RightHandAlpha; // 0x7c4
    float CushionAmount; // 0x7c8
    float LeftLegExtension; // 0x7cc
    float RightLegExtension; // 0x7d0
    float AimLooseness; // 0x7d4
    float SpineMobility; // 0x7d8
    bool ApplyConstraints; // 0x7dc
    char pad_7dd[0x3];
    static UCR_Biped_C* StaticClass();
}; // Size: 0x7e0
#pragma pack(pop)
