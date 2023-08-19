#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UControlRig.hpp"
#pragma pack(push, 1)
class UCR_Spider_C : public UControlRig {
public:
    FTransform Foot_01_R; // 0x650
    float Foot_01_R_Alpha; // 0x680
    char pad_684[0xc];
    FTransform Foot_02_R; // 0x690
    float Foot_02_R_Alpha; // 0x6c0
    char pad_6c4[0xc];
    FTransform Foot_03_R; // 0x6d0
    float Foot_03_R_Alpha; // 0x700
    char pad_704[0xc];
    FTransform Foot_04_R; // 0x710
    float Foot_04_R_Alpha; // 0x740
    char pad_744[0xc];
    FTransform Foot_01_L; // 0x750
    float Foot_01_L_Alpha; // 0x780
    char pad_784[0xc];
    FTransform Foot_02_L; // 0x790
    float Foot_02_L_Alpha; // 0x7c0
    char pad_7c4[0xc];
    FTransform Foot_03_L; // 0x7d0
    float Foot_03_L_Alpha; // 0x800
    char pad_804[0xc];
    FTransform Foot_04_L; // 0x810
    float Foot_04_L_Alpha; // 0x840
    char pad_844[0xc];
    FTransform Pelvis; // 0x850
    float Pelvis_Alpha; // 0x880
    char pad_884[0xc];
    static UCR_Spider_C* StaticClass();
}; // Size: 0x890
#pragma pack(pop)
