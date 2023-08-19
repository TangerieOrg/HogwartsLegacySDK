#pragma once
#include <cstdint>
namespace EXRSystemFlags {
#pragma pack(push, 1)
enum Type {
    NoFlags = 0,
    IsAR = 1,
    IsTablet = 2,
    IsHeadMounted = 4,
    SupportsHandTracking = 8,
    EXRSystemFlags_MAX = 9,
};
#pragma pack(pop)
}
