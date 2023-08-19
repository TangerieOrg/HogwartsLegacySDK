#pragma once
#include <cstdint>
#include "UObject.hpp"
class UCameraStackVolumePreset;
#pragma pack(push, 1)
class UCameraStackInfluenceHandle : public UObject {
public:
    UCameraStackVolumePreset* Preset; // 0x28
    int32_t Priority; // 0x30
    float MaxBlendSpeed; // 0x34
    float weight; // 0x38
    char pad_3c[0x4];
    static UCameraStackInfluenceHandle* StaticClass();
    void SetInfluenceWeight(float NewWeight);
}; // Size: 0x40
#pragma pack(pop)
