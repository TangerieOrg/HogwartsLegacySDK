#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "URenderSettingsCustomBlendDomainOverrideComponentBase.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainOverrideNamedComponent : public URenderSettingsCustomBlendDomainOverrideComponentBase {
public:
    FRenderSettingsCustomBlendDomainName Name; // 0xd8
    float Value; // 0xe0
    char pad_e4[0x4];
    static URenderSettingsCustomBlendDomainOverrideNamedComponent* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
