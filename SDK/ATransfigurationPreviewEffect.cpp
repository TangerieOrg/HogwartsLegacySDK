#include "AActor.hpp"
#include "ATransfigurationPreviewEffect.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
ATransfigurationPreviewEffect* ATransfigurationPreviewEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationPreviewEffect");
    return (ATransfigurationPreviewEffect*)res;
}
void ATransfigurationPreviewEffect::TickVFX(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewEffect.TickVFX"));
    struct Params_TickVFX {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_TickVFX params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewEffect::OnTargetActorDestroyed(AActor* InDestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewEffect.OnTargetActorDestroyed"));
    struct Params_OnTargetActorDestroyed {
        AActor* InDestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnTargetActorDestroyed params{};
    params.InDestroyedActor = (AActor*)InDestroyedActor;
    ProcessEvent(func, &params);
}
void ATransfigurationPreviewEffect::BeginVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPreviewEffect.BeginVFX"));
    struct Params_BeginVFX {
    }; // Size: 0x0
    Params_BeginVFX params{};
    ProcessEvent(func, &params);
}
