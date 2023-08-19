#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainConstant : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    float Constant; // 0x28
    char pad_2c[0x4];
    static URenderSettingsCustomBlendDomainConstant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
