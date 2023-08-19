#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynchronizeMethod : uint8_t {
    Synchronize_None = 0,
    Synchronize_Location = 1,
    Synchronize_Schedule = 2,
    Synchronize_LocationAndSchedule = 3,
    Synchronize_ReleaseCustomT3 = 4,
    Synchronize_MAX = 5,
};
#pragma pack(pop)
