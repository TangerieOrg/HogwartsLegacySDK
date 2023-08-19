#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum MediaTextureOutputFormat : uint8_t {
    MTOF_Default = 0,
    MTOF_SRGB_LINOUT = 1,
    MTOF_MAX = 2,
};
#pragma pack(pop)
