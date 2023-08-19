#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDrivenDestinationMode : uint8_t {
    Bone = 0,
    MorphTarget = 1,
    MaterialParameter = 2,
    EDrivenDestinationMode_MAX = 3,
};
#pragma pack(pop)
