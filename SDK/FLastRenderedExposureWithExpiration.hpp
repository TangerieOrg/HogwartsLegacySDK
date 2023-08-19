#pragma once
#include <cstdint>
#include "FLastRenderedExposure.hpp"
#pragma pack(push, 1)
struct FLastRenderedExposureWithExpiration : public FLastRenderedExposure {
    int64_t MaxAge; // 0x20
}; // Size: 0x28
#pragma pack(pop)
