#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNPC_OptimizationSettings {
    float NonCAnimationTickDist; // 0x0
    float CAnimationTickDist; // 0x4
    float NonCShutdownDist; // 0x8
    float CShutdownMinDist; // 0xc
    float CShutdownDist; // 0x10
    float NonCRenderedShutdown; // 0x14
    float CNotRenderedShutdownNear; // 0x18
    float CNotRenderedShutdownFar; // 0x1c
    float ShutdownMaxDist; // 0x20
    float RenderMaxDist; // 0x24
}; // Size: 0x28
#pragma pack(pop)
