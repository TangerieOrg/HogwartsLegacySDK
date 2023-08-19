#pragma once
#include <cstdint>
namespace EStretch {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Fill = 1,
    ScaleToFit = 2,
    ScaleToFitX = 3,
    ScaleToFitY = 4,
    ScaleToFill = 5,
    ScaleBySafeZone = 6,
    UserSpecified = 7,
    EStretch_MAX = 8,
};
#pragma pack(pop)
}
