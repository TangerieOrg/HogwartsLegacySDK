#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectStateTypeEnum : uint8_t {
    Chaos_NONE = 0,
    Chaos_Object_Sleeping = 1,
    Chaos_Object_Kinematic = 2,
    Chaos_Object_Static = 3,
    Chaos_Object_Dynamic = 4,
    Chaos_Object_UserDefined = 100,
    Chaos_Max = 101,
};
#pragma pack(pop)
