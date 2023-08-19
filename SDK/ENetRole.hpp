#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ENetRole : uint8_t {
    ROLE_None = 0,
    ROLE_SimulatedProxy = 1,
    ROLE_AutonomousProxy = 2,
    ROLE_Authority = 3,
    ROLE_MAX = 4,
};
#pragma pack(pop)
