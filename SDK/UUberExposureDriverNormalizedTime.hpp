#pragma once
#include <cstdint>
#include "FDateInput.hpp"
#include "UUberExposureDriver.hpp"
#pragma pack(push, 1)
class UUberExposureDriverNormalizedTime : public UUberExposureDriver {
public:
    FDateInput DefaultDay; // 0x28
    bool bAssumeNoonIfNoDayNight; // 0x34
    bool bUseDefaultDay; // 0x35
    char pad_36[0x2];
    static UUberExposureDriverNormalizedTime* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
