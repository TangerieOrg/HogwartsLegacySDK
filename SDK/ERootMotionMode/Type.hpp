#pragma once
#include <cstdint>
namespace ERootMotionMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    NoRootMotionExtraction = 0,
    IgnoreRootMotion = 1,
    RootMotionFromEverything = 2,
    RootMotionFromMontagesOnly = 3,
    ERootMotionMode_MAX = 4,
};
#pragma pack(pop)
}
