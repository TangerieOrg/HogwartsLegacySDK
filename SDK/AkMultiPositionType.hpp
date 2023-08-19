#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AkMultiPositionType : uint8_t {
    SingleSource = 0,
    MultiSources = 1,
    MultiDirections = 2,
    AkMultiPositionType_MAX = 3,
};
#pragma pack(pop)
