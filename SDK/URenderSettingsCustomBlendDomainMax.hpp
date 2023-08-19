#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainMax : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    TArray<URenderSettingsCustomBlendDomain*> Domains; // 0x28
    static URenderSettingsCustomBlendDomainMax* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
