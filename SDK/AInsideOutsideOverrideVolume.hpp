#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class AInsideOutsideOverrideVolume : public AVolume {
public:
    char pad_280[0x8];
    float Priority; // 0x288
    float BlendRadius; // 0x28c
    float BlendWeight; // 0x290
    bool bEnabled; // 0x294
    char pad_295[0x3];
    static AInsideOutsideOverrideVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x298
#pragma pack(pop)
