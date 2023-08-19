#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class APlayerCameraManager;
class AActor;
struct FPostProcessSettings;
#pragma pack(push, 1)
class UCameraModifier : public UObject {
public:
    uint8_t bDebug : 1; // 0x28
    uint8_t bExclusive : 1; // 0x28
    uint8_t pad_bitfield_28_2 : 6;
    char pad_29[0x3];
    uint8_t Priority; // 0x2c
    char pad_2d[0x3];
    APlayerCameraManager* CameraOwner; // 0x30
    float AlphaInTime; // 0x38
    float AlphaOutTime; // 0x3c
    float Alpha; // 0x40
    char pad_44[0x4];
    static UCameraModifier* StaticClass();
    bool IsDisabled();
    AActor* GetViewTarget();
    void EnableModifier();
    void DisableModifier(bool bImmediate);
    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
    void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);
}; // Size: 0x48
#pragma pack(pop)
