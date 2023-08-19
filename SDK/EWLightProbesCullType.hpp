#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWLightProbesCullType : int32_t {
    Default = 0,
    Outside = 1,
    Inside = 2,
    EWLightProbesCullType_MAX = 3,
};
#pragma pack(pop)
