#include "APlayerCameraManager.hpp"
#include "ECameraShakePlaySpace.hpp"
#include "FFOscillator.hpp"
#include "FMinimalViewInfo.hpp"
#include "FROscillator.hpp"
#include "FRotator.hpp"
#include "FVOscillator.hpp"
#include "UCameraAnim.hpp"
#include "UCameraAnimInst.hpp"
#include "UCameraAnimationSequence.hpp"
#include "UCameraShakeBase.hpp"
#include "UCameraShakeSourceComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMatineeCameraShake.hpp"
#include "USequenceCameraShakePattern.hpp"
UMatineeCameraShake* UMatineeCameraShake::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.MatineeCameraShake");
    return (UMatineeCameraShake*)res;
}
void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake"));
    struct Params_BlueprintUpdateCameraShake {
        float DeltaTime; // 0x0
        float Alpha; // 0x4
        char pad_8[0x8];
        FMinimalViewInfo POV; // 0x10
        FMinimalViewInfo ModifiedPOV; // 0x690
    }; // Size: 0xd10
    Params_BlueprintUpdateCameraShake params{};
    params.DeltaTime = (float)DeltaTime;
    params.Alpha = (float)Alpha;
    params.POV = (FMinimalViewInfo)POV;
    params.ModifiedPOV = (FMinimalViewInfo)ModifiedPOV;
    ProcessEvent(func, &params);
    POV = params.POV;
    ModifiedPOV = params.ModifiedPOV;
}
UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShake"));
    struct Params_StartMatineeCameraShake {
        APlayerCameraManager* PlayerCameraManager; // 0x0
        UClass* ShakeClass; // 0x8
        float Scale; // 0x10
        ECameraShakePlaySpace PlaySpace; // 0x14
        char pad_15[0x3];
        FRotator UserPlaySpaceRot; // 0x18
        char pad_24[0x4];
        UMatineeCameraShake* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_StartMatineeCameraShake params{};
    params.PlayerCameraManager = (APlayerCameraManager*)PlayerCameraManager;
    params.ShakeClass = (UClass*)ShakeClass;
    params.Scale = (float)Scale;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMatineeCameraShake*)params.ReturnValue;
}
UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, UClass* ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource"));
    struct Params_StartMatineeCameraShakeFromSource {
        APlayerCameraManager* PlayerCameraManager; // 0x0
        UClass* ShakeClass; // 0x8
        UCameraShakeSourceComponent* SourceComponent; // 0x10
        float Scale; // 0x18
        ECameraShakePlaySpace PlaySpace; // 0x1c
        char pad_1d[0x3];
        FRotator UserPlaySpaceRot; // 0x20
        char pad_2c[0x4];
        UMatineeCameraShake* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_StartMatineeCameraShakeFromSource params{};
    params.PlayerCameraManager = (APlayerCameraManager*)PlayerCameraManager;
    params.ShakeClass = (UClass*)ShakeClass;
    params.SourceComponent = (UCameraShakeSourceComponent*)SourceComponent;
    params.Scale = (float)Scale;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMatineeCameraShake*)params.ReturnValue;
}
bool UMatineeCameraShake::ReceiveIsFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShake.ReceiveIsFinished"));
    struct Params_ReceiveIsFinished {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ReceiveIsFinished params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMatineeCameraShake::ReceiveStopShake(bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShake.ReceiveStopShake"));
    struct Params_ReceiveStopShake {
        bool bImmediately; // 0x0
    }; // Size: 0x1
    Params_ReceiveStopShake params{};
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void UMatineeCameraShake::ReceivePlayShake(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayCameras.MatineeCameraShake.ReceivePlayShake"));
    struct Params_ReceivePlayShake {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_ReceivePlayShake params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
