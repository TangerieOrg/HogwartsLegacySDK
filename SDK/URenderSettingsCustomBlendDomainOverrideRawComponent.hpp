#pragma once
#include <cstdint>
#include "URenderSettingsCustomBlendDomainOverrideComponentBase.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainOverrideRawComponent : public URenderSettingsCustomBlendDomainOverrideComponentBase {
public:
    FName Name; // 0xd8
    float Value; // 0xe0
    char pad_e4[0x4];
    static URenderSettingsCustomBlendDomainOverrideRawComponent* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
