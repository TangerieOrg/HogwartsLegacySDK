#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryRunToType : uint8_t {
    LeadInAndRelease = 0,
    ReleaseImmediately = 1,
    EEnemy_MAX = 2,
};
#pragma pack(pop)
