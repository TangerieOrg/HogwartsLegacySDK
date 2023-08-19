#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PlayerProtectionState {
    NormalAttackProtection = 0,
    FullAttackProtection = 1,
    VulnerableNoProtection = 2,
    FlyingProtection = 3,
    SwimmingProtection = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
