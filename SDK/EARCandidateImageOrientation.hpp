#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARCandidateImageOrientation : uint8_t {
    Landscape = 0,
    Portrait = 1,
    EARCandidateImageOrientation_MAX = 2,
};
#pragma pack(pop)
