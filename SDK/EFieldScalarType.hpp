#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldScalarType : uint8_t {
    Scalar_ExternalClusterStrain = 0,
    Scalar_Kill = 1,
    Scalar_DisableThreshold = 2,
    Scalar_SleepingThreshold = 3,
    Scalar_InternalClusterStrain = 4,
    Scalar_DynamicConstraint = 5,
    Scalar_TargetMax = 6,
    Scalar_MAX = 7,
};
#pragma pack(pop)
