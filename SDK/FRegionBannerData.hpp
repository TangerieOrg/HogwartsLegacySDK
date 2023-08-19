#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRegionBannerData {
    FName DisplayName; // 0x0
    bool bShowBanner; // 0x8
    bool bDoZoom; // 0x9
    char pad_a[0x2];
    float MiniMapZoomTarget; // 0xc
    float MiniMapZoomTime; // 0x10
}; // Size: 0x14
#pragma pack(pop)
