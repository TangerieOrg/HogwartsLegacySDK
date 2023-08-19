#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "URenderSettingsBlendDomainAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsBlendDomainFullAsset : public URenderSettingsBlendDomainAsset {
public:
    FBlendDomain BlendDomain; // 0x30
    static URenderSettingsBlendDomainFullAsset* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
