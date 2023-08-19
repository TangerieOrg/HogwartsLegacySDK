#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialPermuterParameterCopy : uint8_t {
    Default = 0,
    AutoDetect = 1,
    InterpParameters = 2,
    UniformParameters = 3,
    Exhaustive = 4,
    FullDeep = 5,
    NoCopy = 6,
    EMaterialPermuterParameterCopy_MAX = 7,
};
#pragma pack(pop)
