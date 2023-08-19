#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ACLRotationFormat {
    ACLRF_Quat_128 = 0,
    ACLRF_QuatDropW_96 = 1,
    ACLRF_QuatDropW_Variable = 2,
    ACLRF_MAX = 3,
};
#pragma pack(pop)
