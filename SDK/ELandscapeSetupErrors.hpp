#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELandscapeSetupErrors {
    LSE_None = 0,
    LSE_NoLandscapeInfo = 1,
    LSE_CollsionXY = 2,
    LSE_NoLayerInfo = 3,
    LSE_MAX = 4,
};
#pragma pack(pop)
