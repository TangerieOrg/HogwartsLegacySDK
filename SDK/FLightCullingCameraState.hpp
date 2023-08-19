#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FLightCullingCameraState {
    char pad_0[0x30];
    AActor* Player; // 0x30
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
