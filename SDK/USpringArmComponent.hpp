#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class USpringArmComponent : public USceneComponent {
public:
    char pad_220[0x8];
    FVector TargetOffset; // 0x228
    float ProbeSize; // 0x234
    ECollisionChannel ProbeChannel; // 0x238
    char pad_239[0x3];
    uint8_t bDoCollisionTest : 1; // 0x23c
    uint8_t bUsePawnControlRotation : 1; // 0x23c
    uint8_t bInheritPitch : 1; // 0x23c
    uint8_t bInheritYaw : 1; // 0x23c
    uint8_t bInheritRoll : 1; // 0x23c
    uint8_t bEnableCameraLag : 1; // 0x23c
    uint8_t bEnableCameraRotationLag : 1; // 0x23c
    uint8_t bUseCameraLagSubstepping : 1; // 0x23c
    uint8_t bDrawDebugLagMarkers : 1; // 0x23d
    uint8_t pad_bitfield_23d_1 : 7;
    char pad_23e[0x2];
    float CameraLagSpeed; // 0x240
    float CameraRotationLagSpeed; // 0x244
    float CameraLagMaxTimeStep; // 0x248
    float CameraLagMaxDistance; // 0x24c
    char pad_250[0x50];
    static USpringArmComponent* StaticClass();
    bool IsCollisionFixApplied();
    FVector GetUnfixedCameraPosition();
    FRotator GetTargetRotation();
}; // Size: 0x2a0
#pragma pack(pop)
