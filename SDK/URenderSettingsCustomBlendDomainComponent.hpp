#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainNameWithValue.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainComponent : public USceneComponent {
public:
    TArray<FRenderSettingsCustomBlendDomainNameWithValue> Domains; // 0x220
    float Priority; // 0x230
    float BlendRadius; // 0x234
    float BlendWeight; // 0x238
    bool bEnabled; // 0x23c
    bool bUnbounded; // 0x23d
    char pad_23e[0x2];
    static URenderSettingsCustomBlendDomainComponent* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x240
#pragma pack(pop)
