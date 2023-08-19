#pragma once
#include <cstdint>
#include "FRenderSettingsPreComputedBlendDomainName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolBlendDomainZero : public UFXAutoTriggerBool {
public:
    FRenderSettingsPreComputedBlendDomainName BlendDomain; // 0x28
    static UFXAutoTriggerBoolBlendDomainZero* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
