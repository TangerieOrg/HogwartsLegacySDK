#pragma once
#include <cstdint>
#include "ECameraProjectionMode\Type.hpp"
#include "FPostProcessSettings.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FMinimalViewInfo {
    FVector Location; // 0x0
    FRotator Rotation; // 0xc
    float FOV; // 0x18
    float DesiredFOV; // 0x1c
    float OrthoWidth; // 0x20
    float OrthoNearClipPlane; // 0x24
    float OrthoFarClipPlane; // 0x28
    float AspectRatio; // 0x2c
    uint8_t bConstrainAspectRatio : 1; // 0x30
    uint8_t bUseFieldOfViewForLOD : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    char pad_31[0x3];
    ECameraProjectionMode::Type ProjectionMode; // 0x34
    char pad_35[0x3];
    float PostProcessBlendWeight; // 0x38
    char pad_3c[0x4];
    FPostProcessSettings PostProcessSettings; // 0x40
    FVector2D OffCenterProjectionOffset; // 0x630
    char pad_638[0x48];
}; // Size: 0x680
#pragma pack(pop)
