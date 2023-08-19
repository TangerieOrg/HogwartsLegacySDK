#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AttackCollisionType : uint8_t {
    LeftHandWeapon = 0,
    RightHandWeapon = 1,
    BodyCapsule = 2,
    LeftAndRight = 3,
    All = 4,
    AttackCollisionType_MAX = 5,
};
#pragma pack(pop)
