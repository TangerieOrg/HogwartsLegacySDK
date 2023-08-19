#pragma once
#include <cstdint>
#include "ECameraProjectionMode\Type.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneComponent.hpp"
struct FMinimalViewInfo;
#pragma pack(push, 1)
class UCameraComponent : public USceneComponent {
public:
    float OrthoNearClipPlane; // 0x220
    float OrthoFarClipPlane; // 0x224
    float AspectRatio; // 0x228
    uint8_t bConstrainAspectRatio : 1; // 0x22c
    uint8_t bUseFieldOfViewForLOD : 1; // 0x22c
    uint8_t bLockToHmd : 1; // 0x22c
    uint8_t bUsePawnControlRotation : 1; // 0x22c
    uint8_t pad_bitfield_22c_4 : 4;
    ECameraProjectionMode::Type ProjectionMode; // 0x22d
    char pad_22e[0x32];
    float PostProcessBlendWeight; // 0x260
    char pad_264[0x2c];
    FPostProcessSettings PostProcessSettings; // 0x290
    static UCameraComponent* StaticClass();
    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    void SetProjectionMode(ECameraProjectionMode::Type InProjectionMode);
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    void SetOrthoWidth(float InOrthoWidth);
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    void SetFieldOfView(float InFieldOfView);
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    void SetAspectRatio(float InAspectRatio);
    void RemoveBlendable();
    void OnCameraMeshHiddenChanged();
    void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
    void AddOrUpdateBlendable();
}; // Size: 0x880
#pragma pack(pop)
