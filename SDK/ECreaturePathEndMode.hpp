#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreaturePathEndMode : uint8_t {
    Stop = 0,
    KeepSpeed = 1,
    ECreaturePathEndMode_MAX = 2,
};
#pragma pack(pop)
