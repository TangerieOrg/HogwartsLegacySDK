#pragma once
#include <cstdint>
#include "EAttachCameraType.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAttachCameraEditorPlacement {
    FVector Position; // 0x0
    char pad_c[0x4];
    FQuat Rotation; // 0x10
    EAttachCameraType AttachType; // 0x20
    bool bValid; // 0x21
    char pad_22[0xe];
}; // Size: 0x30
#pragma pack(pop)
