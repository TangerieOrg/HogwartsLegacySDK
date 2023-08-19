#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_AbilityChannel : uint8_t {
    FullBody = 0,
    FullBodyAdditive = 1,
    PartialBody1 = 2,
    EmoPartial = 3,
    Facial = 4,
    PartialBody = 5,
    RightArmPartial = 6,
    BlindHead = 7,
    BlindArm = 8,
    Injured = 9,
    Right = 10,
    RightArmPartial2 = 11,
    LeftArmPartial = 12,
    ENPC_MAX = 13,
};
#pragma pack(pop)
