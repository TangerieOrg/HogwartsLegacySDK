#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAngularConstraintMotion : uint8_t {
    ACM_Free = 0,
    ACM_Limited = 1,
    ACM_Locked = 2,
    ACM_MAX = 3,
};
#pragma pack(pop)
