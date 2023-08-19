#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRenderSettingsCustomBlendDomainNameWithValue.hpp"
class AVolume;
#pragma pack(push, 1)
class ARenderSettingsCustomBlendDomainVolumeAttached : public AActor {
public:
    char pad_248[0x8];
    AVolume* AttachTo; // 0x250
    TArray<FRenderSettingsCustomBlendDomainNameWithValue> Domains; // 0x258
    float Priority; // 0x268
    float BlendRadius; // 0x26c
    float BlendWeight; // 0x270
    bool bEnabled; // 0x274
    char pad_275[0x3];
    static ARenderSettingsCustomBlendDomainVolumeAttached* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x278
#pragma pack(pop)
