#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECharacterOptionsCollisionResponse : int8_t {
    DoNotSetCollisionResponse = 0,
    Ignore = 1,
    Block = 2,
    Overlap = 3,
    ECharacterOptionsCollisionResponse_MAX = 4,
};
#pragma pack(pop)
