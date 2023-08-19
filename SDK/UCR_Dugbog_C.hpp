#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UControlRig.hpp"
#pragma pack(push, 1)
class UCR_Dugbog_C : public UControlRig {
public:
    FTransform Foot_Back_R; // 0x650
    float Pelvis_Alpha_Ctrl; // 0x680
    float Foot_Back_R_Alpha_Ctrl; // 0x684
    float Foot_Back_L_Alpha_Ctrl; // 0x688
    float Foot_Front_L_Alpha_Ctrl; // 0x68c
    float Foot_Front_R_Alpha_Ctrl; // 0x690
    char pad_694[0xc];
    FTransform Foot_Back_L; // 0x6a0
    FTransform Foot_Front_L; // 0x6d0
    FTransform Foot_Front_R; // 0x700
    FTransform Pelvis; // 0x730
    FTransform Chest; // 0x760
    FVector AimTarget; // 0x790
    float AimAlpha; // 0x79c
    float AimLooseness; // 0x7a0
    float FloatParam; // 0x7a4
    char pad_7a8[0x8];
    FTransform tail_01; // 0x7b0
    float Tail_01_Alpha_Ctrl; // 0x7e0
    float Tail_02_Alpha_Ctrl; // 0x7e4
    char pad_7e8[0x8];
    FTransform tail_02; // 0x7f0
    static UCR_Dugbog_C* StaticClass();
}; // Size: 0x820
#pragma pack(pop)
