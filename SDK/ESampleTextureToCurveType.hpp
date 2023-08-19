#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESampleTextureToCurveType : uint8_t {
    SampleAlongU = 0,
    SampleAlongV = 1,
    ESampleTextureToCurveType_MAX = 2,
};
#pragma pack(pop)
