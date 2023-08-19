#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EDistributionVectorMirrorFlags : uint8_t {
    EDVMF_Same = 0,
    EDVMF_Different = 1,
    EDVMF_Mirror = 2,
    EDVMF_MAX = 3,
};
#pragma pack(pop)
