#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformedParameterSource : uint8_t {
    Actor = 0,
    BoneOrSocket = 1,
    Component = 2,
    None = 3,
    ETransformedParameterSource_MAX = 4,
};
#pragma pack(pop)
