#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EDetailMode : uint8_t {
    DM_Low = 0,
    DM_Medium = 1,
    DM_High = 2,
    DM_MAX = 3,
};
#pragma pack(pop)
