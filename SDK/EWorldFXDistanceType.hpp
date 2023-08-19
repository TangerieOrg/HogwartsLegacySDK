#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWorldFXDistanceType : uint8_t {
    UseDefault = 0,
    DistanceMeters = 1,
    NoCulling = 2,
    EWorldFXDistanceType_MAX = 3,
};
#pragma pack(pop)
