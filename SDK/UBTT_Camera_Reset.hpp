#pragma once
#include <cstdint>
#include "UBTT_Camera_Base.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UBTT_Camera_Reset : public UBTT_Camera_Base {
public:
    float ResetDuration; // 0x70
    char pad_74[0x4];
    UCurveFloat* ResetCurve; // 0x78
    bool bCancelResetOnInput; // 0x80
    bool bSkipResetOnMouseInput; // 0x81
    bool bResetYaw; // 0x82
    bool bResetPitch; // 0x83
    bool bResetToPitchFoundOnStack; // 0x84
    char pad_85[0x3];
    float PitchToResetTo; // 0x88
    char pad_8c[0x4];
    static UBTT_Camera_Reset* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
