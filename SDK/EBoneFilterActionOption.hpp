#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBoneFilterActionOption : uint8_t {
    Remove = 0,
    Keep = 1,
    Invalid = 2,
    EBoneFilterActionOption_MAX = 3,
};
#pragma pack(pop)
