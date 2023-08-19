#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class URenderSettingsPreComputeBlendDomain : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    FRenderSettingsPreComputedBlendDomainName Name; // 0x28
    static URenderSettingsPreComputeBlendDomain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
