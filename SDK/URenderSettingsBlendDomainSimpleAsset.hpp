#pragma once
#include <cstdint>
#include "FSimpleBlendDomain.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsBlendDomainSimpleAsset : public URenderSettingsBlendDomainAsset {
public:
    FSimpleBlendDomain BlendDomain; // 0x30
    static URenderSettingsBlendDomainSimpleAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
