#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EObjectFadeCompletedAction.hpp"
#include "EObjectFadeDirection.hpp"
#include "EObjectFadeMasterState.hpp"
class UMeshComponent;
struct FObjectFadeParamsCurve;
struct FObjectFadeParamsEaseFunction;
struct FObjectFadeParamsSpeedDuration;
#pragma pack(push, 1)
class AObjectFadeMaster : public AActor {
public:
    char pad_248[0x50];
    static AObjectFadeMaster* StaticClass();
    static bool MeshStartFadeEaseFunction(UMeshComponent* Mesh, FObjectFadeParamsEaseFunction& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride);
    static bool MeshStartFadeDirectCurve(UMeshComponent* Mesh, FObjectFadeParamsCurve& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride);
    static bool MeshStartFade(UMeshComponent* Mesh, FObjectFadeParamsSpeedDuration& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride);
    static void MeshRemoveFade(UMeshComponent* Mesh, bool& wasFading);
    static void MeshIsFadingOut(UMeshComponent* Mesh, bool& isFading, bool& isDone);
    static void MeshIsFadingIn(UMeshComponent* Mesh, bool& isFading, bool& isDone);
    static bool ActorStartFadeEaseFunction(AActor* Actor, FObjectFadeParamsEaseFunction& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride);
    static bool ActorStartFadeDirectCurve(AActor* Actor, FObjectFadeParamsCurve& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride);
    static bool ActorStartFade(AActor* Actor, FObjectFadeParamsSpeedDuration& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride);
    static void ActorSetFadeInOut(AActor* Actor, EObjectFadeDirection Direction, EObjectFadeMasterState& FadeState, float Duration, EObjectFadeCompletedAction FadeInCompletedAction, EObjectFadeCompletedAction FadeOutCompletedAction, bool bFadeInIfNotInSystem);
    static void ActorRemoveFade(AActor* Actor, bool& wasFading);
    static void ActorPingPongFade(AActor* Actor, EObjectFadeDirection Direction, EObjectFadeMasterState& FadeState, float Duration);
    static void ActorIsFadingOut(AActor* Actor, bool& isFading, bool& isDone);
    static void ActorIsFadingIn(AActor* Actor, bool& isFading, bool& isDone);
}; // Size: 0x298
#pragma pack(pop)
