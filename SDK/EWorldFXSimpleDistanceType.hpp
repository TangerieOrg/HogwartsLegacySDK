#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWorldFXSimpleDistanceType : uint8_t {
    DistanceMeters = 0,
    NoCulling = 1,
    EWorldFXSimpleDistanceType_MAX = 2,
};
#pragma pack(pop)
