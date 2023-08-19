#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PlayerRelTargetTrackingType {
    None = 0,
    Range = 1,
    Forced = 2,
    Player = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
