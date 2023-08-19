#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerScalarBlendDomainActor : public UFXAutoTriggerScalar {
public:
    FRenderSettingsPreComputedBlendDomainName BlendDomain; // 0x28
    static UFXAutoTriggerScalarBlendDomainActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
