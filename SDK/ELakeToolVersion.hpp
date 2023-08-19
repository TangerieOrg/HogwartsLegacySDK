#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELakeToolVersion : uint8_t {
    Base = 0,
    FixWaterDepthEncoding = 1,
    Latest = 1,
    ELakeToolVersion_MAX = 2,
};
#pragma pack(pop)
