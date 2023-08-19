#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class URenderSettingsPreComputeBlendDomainOneMinus : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    FRenderSettingsPreComputedBlendDomainName Name; // 0x28
    static URenderSettingsPreComputeBlendDomainOneMinus* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
