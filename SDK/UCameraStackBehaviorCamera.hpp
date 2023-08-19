#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class USceneComponent;
class AActor;
#pragma pack(push, 1)
class UCameraStackBehaviorCamera : public UCameraStackBehaviorBlend {
public:
    bool bMaintainArmRotation; // 0x1b8
    bool bMaintainArmOrigin; // 0x1b9
    char pad_1ba[0x196];
    static UCameraStackBehaviorCamera* StaticClass();
    void SetSourceCameraComponent(USceneComponent* InSourceCamera, bool bInIsValidOverDuration);
    void SetSourceCamera(AActor* InSourceCamera, bool bInIsValidOverDuration);
}; // Size: 0x350
#pragma pack(pop)
