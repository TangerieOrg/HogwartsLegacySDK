#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosThreadingMode : uint8_t {
    DedicatedThread = 0,
    TaskGraph = 1,
    SingleThread = 2,
    Num = 3,
    Invalid = 4,
    EChaosThreadingMode_MAX = 5,
};
#pragma pack(pop)
