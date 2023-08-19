#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESoundDistanceCalc {
    SOUNDDISTANCE_Normal = 0,
    SOUNDDISTANCE_InfiniteXYPlane = 1,
    SOUNDDISTANCE_InfiniteXZPlane = 2,
    SOUNDDISTANCE_InfiniteYZPlane = 3,
    SOUNDDISTANCE_MAX = 4,
};
#pragma pack(pop)
