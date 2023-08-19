#include "ELockDifficulty.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMeshComponent.hpp"
#include "UPadlockComponent.hpp"
#include "UParticleSystem.hpp"
#include "UStaticMesh.hpp"
void UPadlockComponent::SetGlowStrength(float GlowWipeStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PadlockComponent.SetGlowStrength"));
    struct Params_SetGlowStrength {
        float GlowWipeStrength; // 0x0
    }; // Size: 0x4
    Params_SetGlowStrength params{};
    params.GlowWipeStrength = (float)GlowWipeStrength;
    ProcessEvent(func, &params);
}
UPadlockComponent* UPadlockComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PadlockComponent");
    return (UPadlockComponent*)res;
}
void UPadlockComponent::StartGlow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PadlockComponent.StartGlow"));
    struct Params_StartGlow {
    }; // Size: 0x0
    Params_StartGlow params{};
    ProcessEvent(func, &params);
}
void UPadlockComponent::StartDelayedGlow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PadlockComponent.StartDelayedGlow"));
    struct Params_StartDelayedGlow {
    }; // Size: 0x0
    Params_StartDelayedGlow params{};
    ProcessEvent(func, &params);
}
