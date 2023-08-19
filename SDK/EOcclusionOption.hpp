#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EOcclusionOption : uint8_t {
    OcclusionOff = 0,
    OcclusionOnceOnPost = 1,
    OcclusionTick = 2,
    EOcclusionOption_MAX = 3,
};
#pragma pack(pop)
