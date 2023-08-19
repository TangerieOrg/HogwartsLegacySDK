#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ProtegoDeflection {
    None = 0,
    DeflectBlock = 1,
    DeflectRandom = 2,
    DeflectTarget = 3,
    DeflectBack = 4,
    DeflectDeflect = 5,
    DeflectCounter = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
