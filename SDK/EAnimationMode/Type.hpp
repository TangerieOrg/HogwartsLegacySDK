#pragma once
#include <cstdint>
namespace EAnimationMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    AnimationBlueprint = 0,
    AnimationSingleNode = 1,
    AnimationCustomMode = 2,
    EAnimationMode_MAX = 3,
};
#pragma pack(pop)
}
