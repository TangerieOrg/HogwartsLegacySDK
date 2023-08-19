#include "AActor.hpp"
#include "ACameraStackLookAtTargetActor.hpp"
#include "ECameraStackLookAtStrength.hpp"
#include "UFunction.hpp"
void ACameraStackLookAtTargetActor::DeactivateLookAt(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.DeactivateLookAt"));
    struct Params_DeactivateLookAt {
        int32_t PlayerIndex; // 0x0
    }; // Size: 0x4
    Params_DeactivateLookAt params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ProcessEvent(func, &params);
}
ACameraStackLookAtTargetActor* ACameraStackLookAtTargetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackLookAtTargetActor");
    return (ACameraStackLookAtTargetActor*)res;
}
void ACameraStackLookAtTargetActor::StopPlayerInitiation(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.StopPlayerInitiation"));
    struct Params_StopPlayerInitiation {
        int32_t PlayerIndex; // 0x0
    }; // Size: 0x4
    Params_StopPlayerInitiation params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ProcessEvent(func, &params);
}
void ACameraStackLookAtTargetActor::ActivateLookAt(int32_t PlayerIndex, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.ActivateLookAt"));
    struct Params_ActivateLookAt {
        int32_t PlayerIndex; // 0x0
        float Duration; // 0x4
    }; // Size: 0x8
    Params_ActivateLookAt params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void ACameraStackLookAtTargetActor::StartPlayerInitiation(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.StartPlayerInitiation"));
    struct Params_StartPlayerInitiation {
        int32_t PlayerIndex; // 0x0
    }; // Size: 0x4
    Params_StartPlayerInitiation params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ProcessEvent(func, &params);
}
void ACameraStackLookAtTargetActor::OnTriggerEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.OnTriggerEndOverlap"));
    struct Params_OnTriggerEndOverlap {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnTriggerEndOverlap params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ACameraStackLookAtTargetActor::OnTriggerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.OnTriggerBeginOverlap"));
    struct Params_OnTriggerBeginOverlap {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnTriggerBeginOverlap params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool ACameraStackLookAtTargetActor::IsPlayerInitiationActive(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.IsPlayerInitiationActive"));
    struct Params_IsPlayerInitiationActive {
        int32_t PlayerIndex; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsPlayerInitiationActive params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ACameraStackLookAtTargetActor::IsActiveLookAtTargetForPlayer(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackLookAtTargetActor.IsActiveLookAtTargetForPlayer"));
    struct Params_IsActiveLookAtTargetForPlayer {
        int32_t PlayerIndex; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsActiveLookAtTargetForPlayer params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
