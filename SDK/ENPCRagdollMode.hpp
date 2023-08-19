#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPCRagdollMode {
    NoRagdoll = 0,
    FullRagdoll = 1,
    RecoverFromRagdoll = 2,
    ActiveRagdoll = 3,
    ENPCRagdollMode_MAX = 4,
};
#pragma pack(pop)
