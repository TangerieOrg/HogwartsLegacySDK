#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMOTD {
    FString Content; // 0x0
    FString ImageURL; // 0x10
    int32_t ImgSizeX; // 0x20
    int32_t ImgSizeY; // 0x24
}; // Size: 0x28
#pragma pack(pop)
