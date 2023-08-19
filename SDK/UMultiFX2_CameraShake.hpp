#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UClass;
#pragma pack(push, 1)
class UMultiFX2_CameraShake : public UMultiFX2_Filtered {
public:
    UClass* CameraShake; // 0x68
    float InnerRadius; // 0x70
    float OuterRadius; // 0x74
    float Falloff; // 0x78
    bool bOrientShakeTowardsEpicenter; // 0x7c
    char pad_7d[0x3];
    static UMultiFX2_CameraShake* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
