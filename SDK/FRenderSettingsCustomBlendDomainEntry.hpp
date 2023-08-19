#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedLastBlendDomainName.hpp"
#pragma pack(push, 1)
struct FRenderSettingsCustomBlendDomainEntry {
    FName domain; // 0x0
    float DefaultValue; // 0x8
    char pad_c[0x4];
    FRenderSettingsPreComputedLastBlendDomainName DefaultValueBlendDomain; // 0x10
    bool bInvertDefaultValueBlendDomain; // 0x20
    bool bUseDefaultValueBlendDomain; // 0x21
    char pad_22[0x6];
}; // Size: 0x28
#pragma pack(pop)
