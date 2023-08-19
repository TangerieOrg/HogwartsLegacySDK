#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlockTiming : uint8_t {
    Block_Normal = 0,
    Block_Perfect = 1,
    Block_MAX = 2,
};
#pragma pack(pop)
