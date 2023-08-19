#pragma once
#include <cstdint>
namespace EMobilePlanarReflectionMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Usual = 0,
    MobilePPRExclusive = 1,
    MobilePPR = 2,
    EMobilePlanarReflectionMode_MAX = 3,
};
#pragma pack(pop)
}
