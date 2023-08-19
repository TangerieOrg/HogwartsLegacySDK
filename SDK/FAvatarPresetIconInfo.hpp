#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FAvatarPresetIconInfo {
    FTransform CameraTransform; // 0x0
    bool bUseIdle; // 0x30
    char pad_31[0x3];
    float IdleFrame; // 0x34
    int32_t IconWidth; // 0x38
    int32_t IconHeight; // 0x3c
    TArray<FString> MeshesToHide; // 0x40
}; // Size: 0x50
#pragma pack(pop)
