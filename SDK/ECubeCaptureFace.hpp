#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECubeCaptureFace : uint8_t {
    PosX = 0,
    NegX = 1,
    PosY = 2,
    NegY = 3,
    PosZ = 4,
    NegZ = 5,
    MAX = 6,
};
#pragma pack(pop)
