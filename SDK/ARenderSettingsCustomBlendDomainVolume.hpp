#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FRenderSettingsCustomBlendDomainNameWithValue.hpp"
#pragma pack(push, 1)
class ARenderSettingsCustomBlendDomainVolume : public AVolume {
public:
    char pad_280[0x8];
    TArray<FRenderSettingsCustomBlendDomainNameWithValue> Domains; // 0x288
    float Priority; // 0x298
    float BlendRadius; // 0x29c
    float BlendWeight; // 0x2a0
    bool bEnabled; // 0x2a4
    bool bUnbounded; // 0x2a5
    char pad_2a6[0x2];
    static ARenderSettingsCustomBlendDomainVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x2a8
#pragma pack(pop)
