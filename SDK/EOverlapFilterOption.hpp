#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EOverlapFilterOption {
    OverlapFilter_All = 0,
    OverlapFilter_DynamicOnly = 1,
    OverlapFilter_StaticOnly = 2,
    OverlapFilter_MAX = 3,
};
#pragma pack(pop)
