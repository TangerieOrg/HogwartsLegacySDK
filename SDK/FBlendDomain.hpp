#pragma once
#include <cstdint>
#include "FBlendDomainLegacy.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
struct FBlendDomain : public FBlendDomainLegacy {
    TArray<URenderSettingsCustomBlendDomain*> CustomBlends; // 0x28
}; // Size: 0x38
#pragma pack(pop)
