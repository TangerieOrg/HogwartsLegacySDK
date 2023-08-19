#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocalFrameMode : int32_t {
    FromObject = 0,
    FromGeometry = 1,
    ELocalFrameMode_MAX = 2,
};
#pragma pack(pop)
