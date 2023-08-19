#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameplayTagSourceType : uint8_t {
    Native = 0,
    DefaultTagList = 1,
    TagList = 2,
    RestrictedTagList = 3,
    DataTable = 4,
    Invalid = 5,
    EGameplayTagSourceType_MAX = 6,
};
#pragma pack(pop)
