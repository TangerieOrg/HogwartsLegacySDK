#include "ECameraShakeAttenuation.hpp"
#include "ECameraShakePlaySpace.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCameraShakeSourceComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UCameraShakeSourceComponent* UCameraShakeSourceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraShakeSourceComponent");
    return (UCameraShakeSourceComponent*)res;
}
float UCameraShakeSourceComponent::GetAttenuationFactor(FVector& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeSourceComponent.GetAttenuationFactor"));
    struct Params_GetAttenuationFactor {
        FVector Location; // 0x0
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetAttenuationFactor params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    Location = params.Location;
    return (float)params.ReturnValue;
}
void UCameraShakeSourceComponent::StopAllCameraShakesOfType(UClass* InCameraShake, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeSourceComponent.StopAllCameraShakesOfType"));
    struct Params_StopAllCameraShakesOfType {
        UClass* InCameraShake; // 0x0
        bool bImmediately; // 0x8
    }; // Size: 0x9
    Params_StopAllCameraShakesOfType params{};
    params.InCameraShake = (UClass*)InCameraShake;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void UCameraShakeSourceComponent::StopAllCameraShakes(bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeSourceComponent.StopAllCameraShakes"));
    struct Params_StopAllCameraShakes {
        bool bImmediately; // 0x0
    }; // Size: 0x1
    Params_StopAllCameraShakes params{};
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void UCameraShakeSourceComponent::StartCameraShake(UClass* InCameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeSourceComponent.StartCameraShake"));
    struct Params_StartCameraShake {
        UClass* InCameraShake; // 0x0
        float Scale; // 0x8
        ECameraShakePlaySpace PlaySpace; // 0xc
        char pad_d[0x3];
        FRotator UserPlaySpaceRot; // 0x10
    }; // Size: 0x1c
    Params_StartCameraShake params{};
    params.InCameraShake = (UClass*)InCameraShake;
    params.Scale = (float)Scale;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ProcessEvent(func, &params);
}
void UCameraShakeSourceComponent::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeSourceComponent.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
