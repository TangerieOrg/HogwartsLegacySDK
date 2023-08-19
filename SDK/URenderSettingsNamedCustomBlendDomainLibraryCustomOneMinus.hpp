#pragma once
#include <cstdint>
#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class URenderSettingsNamedCustomBlendDomainLibraryCustomOneMinus : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    FRenderSettingsCustomBlendDomainName Name; // 0x28
    static URenderSettingsNamedCustomBlendDomainLibraryCustomOneMinus* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
