#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARAltitudeSource : uint8_t {
    Precise = 0,
    Coarse = 1,
    UserDefined = 2,
    Unknown = 3,
    EARAltitudeSource_MAX = 4,
};
#pragma pack(pop)
