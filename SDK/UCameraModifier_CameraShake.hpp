#pragma once
#include <cstdint>
#include "FActiveCameraShakeInfo.hpp"
#include "UCameraModifier.hpp"
#pragma pack(push, 1)
class UCameraModifier_CameraShake : public UCameraModifier {
public:
    TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
    char pad_58[0x50];
    float SplitScreenShakeScale; // 0xa8
    char pad_ac[0x4];
    static UCameraModifier_CameraShake* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
