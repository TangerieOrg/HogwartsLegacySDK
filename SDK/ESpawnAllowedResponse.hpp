#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnAllowedResponse : uint8_t {
    SAR_ALLOWSPAWN = 0,
    SAR_FAIL_UNREGISTERED_TYPE = 1,
    SAR_FAIL_LOCKED = 2,
    SAR_FAIL_DEAD = 3,
    SAR_FAIL_CONSUMED = 4,
    SAR_FAIL_ALREADY_EXISTS = 5,
    SAR_FAIL_UNKNOWN = 6,
    SAR_MAX = 7,
};
#pragma pack(pop)
