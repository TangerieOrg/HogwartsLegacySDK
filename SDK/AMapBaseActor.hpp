#pragma once
#include <cstdint>
#include "AActor.hpp"
class UClass;
class UMapCameraParameters;
class AMapPawn;
#pragma pack(push, 1)
class AMapBaseActor : public AActor {
public:
    float ZoomFadeStart; // 0x248
    float ZoomFadeEnd; // 0x24c
    float MinimumAlpha; // 0x250
    char pad_254[0x4];
    UClass* MapCursorClass; // 0x258
    int32_t MaxFrameCountToCover; // 0x260
    float MapAnalogControllerMin; // 0x264
    UMapCameraParameters* CameraParameters; // 0x268
    char pad_270[0x18];
    static AMapBaseActor* StaticClass();
    void SetMapPawn(AMapPawn* Pawn);
    AMapPawn* GetMapPawn();
}; // Size: 0x288
#pragma pack(pop)
