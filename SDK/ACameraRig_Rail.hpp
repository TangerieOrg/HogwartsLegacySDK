#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
class USplineComponent;
#pragma pack(push, 1)
class ACameraRig_Rail : public AActor {
public:
    float CurrentPositionOnRail; // 0x248
    bool bLockOrientationToRail; // 0x24c
    char pad_24d[0x3];
    USceneComponent* TransformComponent; // 0x250
    USplineComponent* RailSplineComponent; // 0x258
    USceneComponent* RailCameraMount; // 0x260
    static ACameraRig_Rail* StaticClass();
    USplineComponent* GetRailSplineComponent();
}; // Size: 0x268
#pragma pack(pop)
