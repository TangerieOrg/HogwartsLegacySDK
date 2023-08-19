#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETagType : uint8_t {
    TagNone = 0,
    TagBranch = 1,
    TagStation = 2,
    ETagType_MAX = 3,
};
#pragma pack(pop)
