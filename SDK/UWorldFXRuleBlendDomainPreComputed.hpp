#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UWorldFXRuleBlendDomainBase.hpp"
#pragma pack(push, 1)
class UWorldFXRuleBlendDomainPreComputed : public UWorldFXRuleBlendDomainBase {
public:
    FRenderSettingsPreComputedBlendDomainName BlendDomain; // 0x28
    static UWorldFXRuleBlendDomainPreComputed* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
