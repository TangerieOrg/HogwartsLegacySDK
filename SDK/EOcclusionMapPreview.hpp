#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOcclusionMapPreview : int32_t {
    AmbientOcclusion = 0,
    BentNormal = 1,
    EOcclusionMapPreview_MAX = 2,
};
#pragma pack(pop)
