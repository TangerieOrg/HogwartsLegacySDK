#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainValueOverrides.hpp"
#pragma pack(push, 1)
struct FRenderSettingsCustomBlendDomainOverrides {
    TArray<void*> InterfaceOverrides; // 0x0
    FRenderSettingsCustomBlendDomainValueOverrides ValueOverrides; // 0x10
}; // Size: 0x68
#pragma pack(pop)
