#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EXRVisualType : uint8_t {
    Controller = 0,
    Hand = 1,
    EXRVisualType_MAX = 2,
};
#pragma pack(pop)
