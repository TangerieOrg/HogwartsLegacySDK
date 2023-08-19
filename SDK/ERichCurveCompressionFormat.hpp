#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERichCurveCompressionFormat {
    RCCF_Empty = 0,
    RCCF_Constant = 1,
    RCCF_Linear = 2,
    RCCF_Cubic = 3,
    RCCF_Mixed = 4,
    RCCF_Weighted = 5,
    RCCF_MAX = 6,
};
#pragma pack(pop)
