#pragma once
#include <cstdint>
#include "ELastFrameExposureValue.hpp"
#include "URenderSettingsCustomBlendDomainNoPreCompute.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainLastFrameExposureRange : public URenderSettingsCustomBlendDomainNoPreCompute {
public:
    float LowExposure; // 0x28
    float HighExposure; // 0x2c
    ELastFrameExposureValue ExposureValue; // 0x30
    char pad_31[0x7];
    static URenderSettingsCustomBlendDomainLastFrameExposureRange* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
