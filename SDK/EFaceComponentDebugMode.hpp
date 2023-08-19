#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFaceComponentDebugMode : uint8_t {
    None = 0,
    ShowEyeVectors = 1,
    ShowFaceMesh = 2,
    EFaceComponentDebugMode_MAX = 3,
};
#pragma pack(pop)
