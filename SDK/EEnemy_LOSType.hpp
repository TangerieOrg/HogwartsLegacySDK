#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_LOSType {
    Line = 0,
    Cone = 1,
    SweptSphere = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
