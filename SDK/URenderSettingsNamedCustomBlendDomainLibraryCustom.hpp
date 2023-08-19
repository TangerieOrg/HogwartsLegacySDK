#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class URenderSettingsNamedCustomBlendDomainLibraryCustom : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    FRenderSettingsCustomBlendDomainName Name; // 0x28
    static URenderSettingsNamedCustomBlendDomainLibraryCustom* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
