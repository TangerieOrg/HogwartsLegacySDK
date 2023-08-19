#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolAllBlendDomainsOne : public UFXAutoTriggerBool {
public:
    TArray<FRenderSettingsPreComputedBlendDomainName> BlendDomains; // 0x28
    static UFXAutoTriggerBoolAllBlendDomainsOne* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
