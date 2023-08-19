#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AnimPhysSimSpaceType : uint8_t {
    Component = 0,
    Actor = 1,
    World = 2,
    RootRelative = 3,
    BoneRelative = 4,
    AnimPhysSimSpaceType_MAX = 5,
};
#pragma pack(pop)
