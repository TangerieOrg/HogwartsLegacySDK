#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBitmapHeaderVersion {
    BHV_BITMAPINFOHEADER = 0,
    BHV_BITMAPV2INFOHEADER = 1,
    BHV_BITMAPV3INFOHEADER = 2,
    BHV_BITMAPV4HEADER = 3,
    BHV_BITMAPV5HEADER = 4,
    BHV_MAX = 5,
};
#pragma pack(pop)
