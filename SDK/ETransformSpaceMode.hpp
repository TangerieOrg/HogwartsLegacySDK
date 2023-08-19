#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransformSpaceMode : uint8_t {
    LocalSpace = 0,
    GlobalSpace = 1,
    BaseSpace = 2,
    BaseJoint = 3,
    Max = 4,
};
#pragma pack(pop)
