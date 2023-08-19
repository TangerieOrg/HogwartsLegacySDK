#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolBlendDomainOne : public UFXAutoTriggerBool {
public:
    FRenderSettingsPreComputedBlendDomainName BlendDomain; // 0x28
    static UFXAutoTriggerBoolBlendDomainOne* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
