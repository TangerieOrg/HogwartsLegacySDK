#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHoudiniAttributes {
    HOUDINI_ATTR_BEGIN = 0,
    Position = 0,
    Normal = 1,
    Time = 2,
    POINTID = 3,
    LIFE = 4,
    Color = 5,
    Alpha = 6,
    Velocity = 7,
    Type = 8,
    Impulse = 9,
    Age = 10,
    HOUDINI_ATTR_SIZE = 11,
    HOUDINI_ATTR_END = 10,
    EHoudiniAttributes_MAX = 12,
};
#pragma pack(pop)
