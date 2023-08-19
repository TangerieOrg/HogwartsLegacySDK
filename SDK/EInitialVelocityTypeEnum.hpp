#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInitialVelocityTypeEnum : uint8_t {
    Chaos_Initial_Velocity_User_Defined = 0,
    Chaos_Initial_Velocity_None = 1,
    Chaos_Max = 2,
};
#pragma pack(pop)
