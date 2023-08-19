#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EDepthOfFieldMethod {
    DOFM_BokehDOF = 0,
    DOFM_Gaussian = 1,
    DOFM_CircleDOF = 2,
    DOFM_MAX = 3,
};
#pragma pack(pop)
