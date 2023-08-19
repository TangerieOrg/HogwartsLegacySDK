#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFlyingBroomHitObjectType : uint8_t {
    Unknown = 0,
    Creature = 1,
    Character = 2,
    CharacterOnBroom = 3,
    NoMount = 4,
    EFlyingBroomHitObjectType_MAX = 5,
};
#pragma pack(pop)
