#pragma once
#include <cstdint>
class UStaticMesh;
#pragma pack(push, 1)
struct FBentDirectionalLightWindowAssets {
    UStaticMesh* PaneMesh; // 0x0
    UStaticMesh* ArrowMesh; // 0x8
    float PaneScalingFactor; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
