#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackBehaviorFilterFlags {
    DontListInactiveBehaviors = 0,
    ListBehaviorsAboveCoreBehaviors = 1,
    ECameraStackBehaviorFilterFlags_MAX = 2,
};
#pragma pack(pop)
