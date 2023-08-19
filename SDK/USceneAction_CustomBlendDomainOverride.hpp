#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "USceneAction_CustomBlendDomainOverrideBase.hpp"
#pragma pack(push, 1)
class USceneAction_CustomBlendDomainOverride : public USceneAction_CustomBlendDomainOverrideBase {
public:
    FRenderSettingsCustomBlendDomainName Name; // 0x88
    float Value; // 0x90
    char pad_94[0x4];
    static USceneAction_CustomBlendDomainOverride* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
