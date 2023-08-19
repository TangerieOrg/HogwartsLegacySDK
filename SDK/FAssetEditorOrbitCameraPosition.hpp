#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAssetEditorOrbitCameraPosition {
    bool bIsSet; // 0x0
    char pad_1[0x3];
    FVector CamOrbitPoint; // 0x4
    FVector CamOrbitZoom; // 0x10
    FRotator CamOrbitRotation; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
