#pragma once
#include <cstdint>
#include "FIntPoint.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FARCameraIntrinsics {
    FIntPoint ImageResolution; // 0x0
    FVector2D FocalLength; // 0x8
    FVector2D PrincipalPoint; // 0x10
}; // Size: 0x18
#pragma pack(pop)
