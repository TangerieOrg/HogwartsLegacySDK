#pragma once
#include <cstdint>
class URenderSettingsCustomBlendDomainBase;
#pragma pack(push, 1)
struct FRenderSettingsCustomBlendDomains {
    TArray<URenderSettingsCustomBlendDomainBase*> AllDomains; // 0x0
    TArray<URenderSettingsCustomBlendDomainBase*> PreComputeDomainsFirst; // 0x10
    TArray<URenderSettingsCustomBlendDomainBase*> PreComputeDomainsNormal; // 0x20
    TArray<URenderSettingsCustomBlendDomainBase*> PreComputeDomainsLast; // 0x30
    TArray<URenderSettingsCustomBlendDomainBase*> PreComputeDomainsCustom; // 0x40
}; // Size: 0x50
#pragma pack(pop)
