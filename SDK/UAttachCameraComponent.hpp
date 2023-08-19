#pragma once
#include <cstdint>
#include "EAttachCameraBillBoardType.hpp"
#include "EAttachCameraType.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UAttachCameraComponent : public USceneComponent {
public:
    char pad_220[0x8];
    FRotator LocalRotator; // 0x228
    bool bCopyToRootComponent; // 0x234
    bool bEnable; // 0x235
    bool bEnableInEditor; // 0x236
    char pad_237[0x19];
    static UAttachCameraComponent* StaticClass();
    void SetupCopyToRootComponent(bool copyToRootComponent);
    void ResetChildRotations();
    void ResetChildLocations();
    void ResetAllChildren();
    bool GetCameraRotation(FRotator& Rotation);
    bool GetCameraLocation(FVector& Eye);
    bool GetCamera(FVector& Eye, FRotator& Orientation);
}; // Size: 0x250
#pragma pack(pop)
