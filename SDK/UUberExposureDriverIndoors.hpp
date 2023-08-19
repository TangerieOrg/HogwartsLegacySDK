#pragma once
#include <cstdint>
#include "UUberExposureDriver.hpp"
#pragma pack(push, 1)
class UUberExposureDriverIndoors : public UUberExposureDriver {
public:
    static UUberExposureDriverIndoors* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
