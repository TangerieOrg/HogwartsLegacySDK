#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EConstraintPlasticityType {
    CCPT_Free = 0,
    CCPT_Shrink = 1,
    CCPT_Grow = 2,
    CCPT_MAX = 3,
};
#pragma pack(pop)
