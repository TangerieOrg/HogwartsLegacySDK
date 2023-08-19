#pragma once
#include <cstdint>
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UEnvironmentalGlobalsCustomScalarBlendDomain : public UEnvironmentalGlobalsCustomScalarModsBase {
public:
    URenderSettingsCustomBlendDomain* BlendDomain; // 0x38
    static UEnvironmentalGlobalsCustomScalarBlendDomain* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
