#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialMergeType : uint8_t {
    MaterialMergeType_Default = 0,
    MaterialMergeType_Simplygon = 1,
    MaterialMergeType_MAX = 2,
};
#pragma pack(pop)
