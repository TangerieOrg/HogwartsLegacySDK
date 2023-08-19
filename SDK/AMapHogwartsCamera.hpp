#pragma once
#include <cstdint>
#include "ACameraActor.hpp"
#include "FVector.hpp"
class ATargetPoint;
class AActor;
#pragma pack(push, 1)
class AMapHogwartsCamera : public ACameraActor {
public:
    ATargetPoint* RotateCenterTarget; // 0x870
    bool AllowRotation; // 0x878
    bool AllowZoom; // 0x879
    char pad_87a[0x2];
    float YawSpeed; // 0x87c
    float MouseSensitivity; // 0x880
    float MaxMouseDragYawSpeed; // 0x884
    float YawAcceleration; // 0x888
    float YawDeceleration; // 0x88c
    float MouseDragYawAcceleration; // 0x890
    float MouseFlickYawDeceleration; // 0x894
    float ZoomAmount; // 0x898
    float Zoom; // 0x89c
    float ZoomSpeed; // 0x8a0
    float MinZoomAppliedWithInput; // 0x8a4
    float ZoomAcceleration; // 0x8a8
    float ZoomDeceleration; // 0x8ac
    TArray<AActor*> ActorsToHide; // 0x8b0
    bool AllowInitialCircleMove; // 0x8c0
    char pad_8c1[0x3];
    FVector FocusLocation; // 0x8c4
    char pad_8d0[0x60];
    static AMapHogwartsCamera* StaticClass();
    void UpdateCamera();
}; // Size: 0x930
#pragma pack(pop)
