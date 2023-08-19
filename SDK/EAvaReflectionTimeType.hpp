#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvaReflectionTimeType : int32_t {
    None = 0,
    Hour = 1,
    Timeslot = 2,
    EAvaReflectionTimeType_MAX = 3,
};
#pragma pack(pop)
