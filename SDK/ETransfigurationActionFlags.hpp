#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransfigurationActionFlags {
    DUMMY = 0,
    Conjuration = 1,
    Transformation = 2,
    Levitation = 4,
    Vanishment = 8,
    Colovaria = 16,
    Scaling = 32,
    Rotation = 64,
    ETransfigurationActionFlags_MAX = 65,
};
#pragma pack(pop)
