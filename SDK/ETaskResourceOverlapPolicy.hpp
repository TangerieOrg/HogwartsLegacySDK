#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETaskResourceOverlapPolicy : uint8_t {
    StartOnTop = 0,
    StartAtEnd = 1,
    ETaskResourceOverlapPolicy_MAX = 2,
};
#pragma pack(pop)
