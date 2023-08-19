#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReflectionSourceType : uint8_t {
    CapturedScene = 0,
    SpecifiedCubemap = 1,
    EReflectionSourceType_MAX = 2,
};
#pragma pack(pop)
