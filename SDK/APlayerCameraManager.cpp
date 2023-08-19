#include "AActor.hpp"
#include "ACameraActor.hpp"
#include "AEmitterCameraLensEffectBase.hpp"
#include "APlayerCameraManager.hpp"
#include "APlayerController.hpp"
#include "ECameraShakePlaySpace.hpp"
#include "FCameraCacheEntry.hpp"
#include "FLinearColor.hpp"
#include "FPostProcessSettings.hpp"
#include "FRotator.hpp"
#include "FTViewTarget.hpp"
#include "FVector.hpp"
#include "UCameraAnim.hpp"
#include "UCameraAnimInst.hpp"
#include "UCameraModifier.hpp"
#include "UCameraModifier_CameraShake.hpp"
#include "UCameraShakeBase.hpp"
#include "UCameraShakeSourceComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
APlayerCameraManager* APlayerCameraManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlayerCameraManager");
    return (APlayerCameraManager*)res;
}
void APlayerCameraManager::SwapPendingViewTargetWhenUsingClientSideCameraUpdates() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates"));
    struct Params_SwapPendingViewTargetWhenUsingClientSideCameraUpdates {
    }; // Size: 0x0
    Params_SwapPendingViewTargetWhenUsingClientSideCameraUpdates params{};
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopCameraShake(UCameraShakeBase* ShakeInstance, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopCameraShake"));
    struct Params_StopCameraShake {
        UCameraShakeBase* ShakeInstance; // 0x0
        bool bImmediately; // 0x8
    }; // Size: 0x9
    Params_StopCameraShake params{};
    params.ShakeInstance = (UCameraShakeBase*)ShakeInstance;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopCameraFade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopCameraFade"));
    struct Params_StopCameraFade {
    }; // Size: 0x0
    Params_StopCameraFade params{};
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopCameraAnimInst"));
    struct Params_StopCameraAnimInst {
        UCameraAnimInst* AnimInst; // 0x0
        bool bImmediate; // 0x8
    }; // Size: 0x9
    Params_StopCameraAnimInst params{};
    params.AnimInst = (UCameraAnimInst*)AnimInst;
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim"));
    struct Params_StopAllInstancesOfCameraAnim {
        UCameraAnim* Anim; // 0x0
        bool bImmediate; // 0x8
    }; // Size: 0x9
    Params_StopAllInstancesOfCameraAnim params{};
    params.Anim = (UCameraAnim*)Anim;
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.SetManualCameraFade"));
    struct Params_SetManualCameraFade {
        float InFadeAmount; // 0x0
        FLinearColor Color; // 0x4
        bool bInFadeAudio; // 0x14
    }; // Size: 0x15
    Params_SetManualCameraFade params{};
    params.InFadeAmount = (float)InFadeAmount;
    params.Color = (FLinearColor)Color;
    params.bInFadeAudio = (bool)bInFadeAudio;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopAllInstancesOfCameraShakeFromSource(UClass* Shake, UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource"));
    struct Params_StopAllInstancesOfCameraShakeFromSource {
        UClass* Shake; // 0x0
        UCameraShakeSourceComponent* SourceComponent; // 0x8
        bool bImmediately; // 0x10
    }; // Size: 0x11
    Params_StopAllInstancesOfCameraShakeFromSource params{};
    params.Shake = (UClass*)Shake;
    params.SourceComponent = (UCameraShakeSourceComponent*)SourceComponent;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopAllInstancesOfCameraShake(UClass* Shake, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopAllInstancesOfCameraShake"));
    struct Params_StopAllInstancesOfCameraShake {
        UClass* Shake; // 0x0
        bool bImmediately; // 0x8
    }; // Size: 0x9
    Params_StopAllInstancesOfCameraShake params{};
    params.Shake = (UClass*)Shake;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopAllCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopAllCameraShakesFromSource"));
    struct Params_StopAllCameraShakesFromSource {
        UCameraShakeSourceComponent* SourceComponent; // 0x0
        bool bImmediately; // 0x8
    }; // Size: 0x9
    Params_StopAllCameraShakesFromSource params{};
    params.SourceComponent = (UCameraShakeSourceComponent*)SourceComponent;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopAllCameraShakes"));
    struct Params_StopAllCameraShakes {
        bool bImmediately; // 0x0
    }; // Size: 0x1
    Params_StopAllCameraShakes params{};
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StopAllCameraAnims"));
    struct Params_StopAllCameraAnims {
        bool bImmediate; // 0x0
    }; // Size: 0x1
    Params_StopAllCameraAnims params{};
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
}
UCameraShakeBase* APlayerCameraManager::StartCameraShakeFromSource(UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StartCameraShakeFromSource"));
    struct Params_StartCameraShakeFromSource {
        UClass* ShakeClass; // 0x0
        UCameraShakeSourceComponent* SourceComponent; // 0x8
        float Scale; // 0x10
        ECameraShakePlaySpace PlaySpace; // 0x14
        char pad_15[0x3];
        FRotator UserPlaySpaceRot; // 0x18
        char pad_24[0x4];
        UCameraShakeBase* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_StartCameraShakeFromSource params{};
    params.ShakeClass = (UClass*)ShakeClass;
    params.SourceComponent = (UCameraShakeSourceComponent*)SourceComponent;
    params.Scale = (float)Scale;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ProcessEvent(func, &params);
    return (UCameraShakeBase*)params.ReturnValue;
}
void APlayerCameraManager::ClearCameraLensEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.ClearCameraLensEffects"));
    struct Params_ClearCameraLensEffects {
    }; // Size: 0x0
    Params_ClearCameraLensEffects params{};
    ProcessEvent(func, &params);
}
UCameraShakeBase* APlayerCameraManager::StartCameraShake(UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StartCameraShake"));
    struct Params_StartCameraShake {
        UClass* ShakeClass; // 0x0
        float Scale; // 0x8
        ECameraShakePlaySpace PlaySpace; // 0xc
        char pad_d[0x3];
        FRotator UserPlaySpaceRot; // 0x10
        char pad_1c[0x4];
        UCameraShakeBase* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_StartCameraShake params{};
    params.ShakeClass = (UClass*)ShakeClass;
    params.Scale = (float)Scale;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ProcessEvent(func, &params);
    return (UCameraShakeBase*)params.ReturnValue;
}
void APlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.StartCameraFade"));
    struct Params_StartCameraFade {
        float FromAlpha; // 0x0
        float ToAlpha; // 0x4
        float Duration; // 0x8
        FLinearColor Color; // 0xc
        bool bShouldFadeAudio; // 0x1c
        bool bHoldWhenFinished; // 0x1d
    }; // Size: 0x1e
    Params_StartCameraFade params{};
    params.FromAlpha = (float)FromAlpha;
    params.ToAlpha = (float)ToAlpha;
    params.Duration = (float)Duration;
    params.Color = (FLinearColor)Color;
    params.bShouldFadeAudio = (bool)bShouldFadeAudio;
    params.bHoldWhenFinished = (bool)bHoldWhenFinished;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::SetGameCameraCutThisFrame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.SetGameCameraCutThisFrame"));
    struct Params_SetGameCameraCutThisFrame {
    }; // Size: 0x0
    Params_SetGameCameraCutThisFrame params{};
    ProcessEvent(func, &params);
}
bool APlayerCameraManager::RemoveCameraModifier(UCameraModifier* ModifierToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.RemoveCameraModifier"));
    struct Params_RemoveCameraModifier {
        UCameraModifier* ModifierToRemove; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveCameraModifier params{};
    params.ModifierToRemove = (UCameraModifier*)ModifierToRemove;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void APlayerCameraManager::RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.RemoveCameraLensEffect"));
    struct Params_RemoveCameraLensEffect {
        AEmitterCameraLensEffectBase* Emitter; // 0x0
    }; // Size: 0x8
    Params_RemoveCameraLensEffect params{};
    params.Emitter = (AEmitterCameraLensEffectBase*)Emitter;
    ProcessEvent(func, &params);
}
void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd"));
    struct Params_OnPhotographyMultiPartCaptureEnd {
    }; // Size: 0x0
    Params_OnPhotographyMultiPartCaptureEnd params{};
    ProcessEvent(func, &params);
}
UCameraAnimInst* APlayerCameraManager::PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.PlayCameraAnim"));
    struct Params_PlayCameraAnim {
        UCameraAnim* Anim; // 0x0
        float Rate; // 0x8
        float Scale; // 0xc
        float BlendInTime; // 0x10
        float BlendOutTime; // 0x14
        bool bLoop; // 0x18
        bool bRandomStartTime; // 0x19
        char pad_1a[0x2];
        float Duration; // 0x1c
        ECameraShakePlaySpace PlaySpace; // 0x20
        char pad_21[0x3];
        FRotator UserPlaySpaceRot; // 0x24
        UCameraAnimInst* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_PlayCameraAnim params{};
    params.Anim = (UCameraAnim*)Anim;
    params.Rate = (float)Rate;
    params.Scale = (float)Scale;
    params.BlendInTime = (float)BlendInTime;
    params.BlendOutTime = (float)BlendOutTime;
    params.bLoop = (bool)bLoop;
    params.bRandomStartTime = (bool)bRandomStartTime;
    params.Duration = (float)Duration;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ProcessEvent(func, &params);
    return (UCameraAnimInst*)params.ReturnValue;
}
void APlayerCameraManager::PhotographyCameraModify(FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& ResultCameraLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.PhotographyCameraModify"));
    struct Params_PhotographyCameraModify {
        FVector NewCameraLocation; // 0x0
        FVector PreviousCameraLocation; // 0xc
        FVector OriginalCameraLocation; // 0x18
        FVector ResultCameraLocation; // 0x24
    }; // Size: 0x30
    Params_PhotographyCameraModify params{};
    params.NewCameraLocation = (FVector)NewCameraLocation;
    params.PreviousCameraLocation = (FVector)PreviousCameraLocation;
    params.OriginalCameraLocation = (FVector)OriginalCameraLocation;
    params.ResultCameraLocation = (FVector)ResultCameraLocation;
    ProcessEvent(func, &params);
    ResultCameraLocation = params.ResultCameraLocation;
}
void APlayerCameraManager::OnPhotographySessionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.OnPhotographySessionStart"));
    struct Params_OnPhotographySessionStart {
    }; // Size: 0x0
    Params_OnPhotographySessionStart params{};
    ProcessEvent(func, &params);
}
void APlayerCameraManager::OnPhotographySessionEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.OnPhotographySessionEnd"));
    struct Params_OnPhotographySessionEnd {
    }; // Size: 0x0
    Params_OnPhotographySessionEnd params{};
    ProcessEvent(func, &params);
}
void APlayerCameraManager::OnPhotographyMultiPartCaptureStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart"));
    struct Params_OnPhotographyMultiPartCaptureStart {
    }; // Size: 0x0
    Params_OnPhotographyMultiPartCaptureStart params{};
    ProcessEvent(func, &params);
}
APlayerController* APlayerCameraManager::GetOwningPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.GetOwningPlayerController"));
    struct Params_GetOwningPlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningPlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
float APlayerCameraManager::GetFOVAngle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.GetFOVAngle"));
    struct Params_GetFOVAngle {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFOVAngle params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator APlayerCameraManager::GetCameraRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.GetCameraRotation"));
    struct Params_GetCameraRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCameraRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector APlayerCameraManager::GetCameraLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.GetCameraLocation"));
    struct Params_GetCameraLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCameraLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(UClass* ModifierClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.FindCameraModifierByClass"));
    struct Params_FindCameraModifierByClass {
        UClass* ModifierClass; // 0x0
        UCameraModifier* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindCameraModifierByClass params{};
    params.ModifierClass = (UClass*)ModifierClass;
    ProcessEvent(func, &params);
    return (UCameraModifier*)params.ReturnValue;
}
bool APlayerCameraManager::BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.BlueprintUpdateCamera"));
    struct Params_BlueprintUpdateCamera {
        AActor* CameraTarget; // 0x0
        FVector NewCameraLocation; // 0x8
        FRotator NewCameraRotation; // 0x14
        float NewCameraFOV; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_BlueprintUpdateCamera params{};
    params.CameraTarget = (AActor*)CameraTarget;
    params.NewCameraLocation = (FVector)NewCameraLocation;
    params.NewCameraRotation = (FRotator)NewCameraRotation;
    params.NewCameraFOV = (float)NewCameraFOV;
    ProcessEvent(func, &params);
    NewCameraLocation = params.NewCameraLocation;
    NewCameraRotation = params.NewCameraRotation;
    NewCameraFOV = params.NewCameraFOV;
    return (bool)params.ReturnValue;
}
UCameraModifier* APlayerCameraManager::AddNewCameraModifier(UClass* ModifierClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.AddNewCameraModifier"));
    struct Params_AddNewCameraModifier {
        UClass* ModifierClass; // 0x0
        UCameraModifier* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddNewCameraModifier params{};
    params.ModifierClass = (UClass*)ModifierClass;
    ProcessEvent(func, &params);
    return (UCameraModifier*)params.ReturnValue;
}
AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(UClass* LensEffectEmitterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerCameraManager.AddCameraLensEffect"));
    struct Params_AddCameraLensEffect {
        UClass* LensEffectEmitterClass; // 0x0
        AEmitterCameraLensEffectBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddCameraLensEffect params{};
    params.LensEffectEmitterClass = (UClass*)LensEffectEmitterClass;
    ProcessEvent(func, &params);
    return (AEmitterCameraLensEffectBase*)params.ReturnValue;
}
