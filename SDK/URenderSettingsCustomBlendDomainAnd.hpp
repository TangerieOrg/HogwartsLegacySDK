#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainAnd : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    TArray<URenderSettingsCustomBlendDomain*> Domains; // 0x28
    static URenderSettingsCustomBlendDomainAnd* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
