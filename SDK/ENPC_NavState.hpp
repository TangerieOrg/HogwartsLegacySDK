#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_NavState {
    Unknown = 0,
    On = 1,
    Off = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
