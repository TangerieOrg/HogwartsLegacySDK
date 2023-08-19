#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkChannelConfigType : int32_t {
    Anonymous = 0,
    Standard = 1,
    Ambisonic = 2,
    EAkChannelConfigType_MAX = 3,
};
#pragma pack(pop)
