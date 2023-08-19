#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPoseDriverOutput : uint8_t {
    DrivePoses = 0,
    DriveCurves = 1,
    EPoseDriverOutput_MAX = 2,
};
#pragma pack(pop)
