#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStreamingVolumeUsage : uint8_t {
    SVB_Loading = 0,
    SVB_LoadingAndVisibility = 1,
    SVB_VisibilityBlockingOnLoad = 2,
    SVB_BlockingOnLoad = 3,
    SVB_LoadingNotVisible = 4,
    SVB_MAX = 5,
};
#pragma pack(pop)
