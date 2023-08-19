#pragma once
#include <cstdint>
#include "APlayerCameraManager.hpp"
#include "FCameraDefaultData.hpp"
#include "FCameraInputMappings.hpp"
#include "FCameraOptionMappings.hpp"
#include "FVector2D.hpp"
class UClass;
class UCameraPostProcessHandler;
class UCameraAspectRatioWidget;
class UUserWidget;
class UStaticMesh;
class UMaterial;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class AActor;
class UCameraStackSettings;
class ACameraStackActor;
#pragma pack(push, 1)
class ACameraStackManager : public APlayerCameraManager {
public:
    FName DefaultCameraStyle; // 0x2ba0
    FCameraDefaultData DefaultData; // 0x2ba8
    FCameraInputMappings InputMappings; // 0x2bb4
    char pad_2c4c[0x4];
    FCameraOptionMappings OptionMappings; // 0x2c50
    char pad_2cf0[0x18];
    UClass* DefaultActorClass; // 0x2d08
    UClass* AspectRatioWidgetClass; // 0x2d10
    UCameraPostProcessHandler* PostProcessHandler; // 0x2d18
    char pad_2d20[0xe0];
    bool bOnlyTickAssigned; // 0x2e00
    bool bOverrideBlendDuration; // 0x2e01
    char pad_2e02[0x2];
    float BlendDurationOverride; // 0x2e04
    FVector2D LazyBlendSpeedRange; // 0x2e08
    UCameraAspectRatioWidget* AspectRatioWidget; // 0x2e10
    UUserWidget* RuleOfThirdsWidget; // 0x2e18
    UStaticMesh* FocusPlaneVisualizationMesh; // 0x2e20
    UMaterial* FocusPlaneVisualizationMaterial; // 0x2e28
    UStaticMeshComponent* DebugFocusPlaneComponent; // 0x2e30
    UMaterialInstanceDynamic* DebugFocusPlaneMID; // 0x2e38
    char pad_2e40[0x30];
    static ACameraStackManager* StaticClass();
    void SwitchToCamera(AActor* NewCamera, bool bInOverrideBlendDuration, float InBlendDuration);
    void SwitchToActorsCameraActor(AActor* newActor, bool bInOverrideBlendDuration, float InBlendDuration);
    void SwitchToActiveTargetCamera(bool bInOverrideBlendDuration, float InBlendDuration);
    ACameraStackActor* SpawnCameraActorForTarget(AActor* InTargetActor, UCameraStackSettings* InStackSettings, UClass* InCameraActorClass);
    void SetFixedCameraInPlace(bool bSetToFixed);
    void RemoveFromCameraActorMap(AActor* InActor);
    bool IsCameraFixedInPlace();
    FName GetCameraStyle();
    ACameraStackActor* GetActorsCameraActor(AActor* InActor);
}; // Size: 0x2e70
#pragma pack(pop)
