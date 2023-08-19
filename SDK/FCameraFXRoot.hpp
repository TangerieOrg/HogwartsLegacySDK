#pragma once
#include <cstdint>
class USceneComponent;
#pragma pack(push, 1)
struct FCameraFXRoot {
    USceneComponent* CameraFXRoot; // 0x0
    int32_t UnattachedFrames; // 0x8
    int32_t MaxUnattachedFrames; // 0xc
}; // Size: 0x10
#pragma pack(pop)
