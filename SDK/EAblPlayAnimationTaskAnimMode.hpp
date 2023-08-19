#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAblPlayAnimationTaskAnimMode : uint8_t {
    SingleNode = 0,
    AbilityAnimationNode = 1,
    DynamicMontage = 2,
    EAblPlayAnimationTaskAnimMode_MAX = 3,
};
#pragma pack(pop)
