#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeOverrideType : uint8_t {
    ActualTime = 0,
    NormalizedTime = 1,
    ETimeOverrideType_MAX = 2,
};
#pragma pack(pop)
