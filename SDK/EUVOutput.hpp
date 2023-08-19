#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUVOutput : uint8_t {
    DoNotOutputChannel = 0,
    OutputChannel = 1,
    EUVOutput_MAX = 2,
};
#pragma pack(pop)
