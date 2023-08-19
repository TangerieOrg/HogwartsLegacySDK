#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "USceneAction_CustomBlendDomainOverrideBase.hpp"
#pragma pack(push, 1)
class USceneAction_BlendDomainOverride : public USceneAction_CustomBlendDomainOverrideBase {
public:
    FRenderSettingsPreComputedBlendDomainName Name; // 0x88
    float Value; // 0x98
    char pad_9c[0x4];
    static USceneAction_BlendDomainOverride* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
