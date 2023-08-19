#pragma once
#include <cstdint>
class UClass;
class UForceFeedbackEffect;
#pragma pack(push, 1)
struct FImpactCameraShakeData {
    UClass* CameraShake; // 0x0
    float InnerRadius; // 0x8
    float OuterRadius; // 0xc
    float Falloff; // 0x10
    uint8_t bOrientShakeTowardsEpicenter : 1; // 0x14
    uint8_t pad_bitfield_14_1 : 7;
    char pad_15[0x3];
    UForceFeedbackEffect* ForceFeedbackEffect; // 0x18
}; // Size: 0x20
#pragma pack(pop)
