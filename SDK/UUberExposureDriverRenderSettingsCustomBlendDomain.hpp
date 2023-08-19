#pragma once
#include <cstdint>
#include "UUberExposureDriver.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UUberExposureDriverRenderSettingsCustomBlendDomain : public UUberExposureDriver {
public:
    URenderSettingsCustomBlendDomain* domain; // 0x28
    static UUberExposureDriverRenderSettingsCustomBlendDomain* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
