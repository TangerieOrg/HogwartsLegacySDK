#include "AActor.hpp"
#include "AFieldGuideHotSpot.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
void AFieldGuideHotSpot::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
AFieldGuideHotSpot* AFieldGuideHotSpot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideHotSpot");
    return (AFieldGuideHotSpot*)res;
}
void AFieldGuideHotSpot::UpdateVFX(float AngleRatio, float DistanceRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.UpdateVFX"));
    struct Params_UpdateVFX {
        float AngleRatio; // 0x0
        float DistanceRatio; // 0x4
    }; // Size: 0x8
    Params_UpdateVFX params{};
    params.AngleRatio = (float)AngleRatio;
    params.DistanceRatio = (float)DistanceRatio;
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::UpdateHotSpotRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.UpdateHotSpotRadius"));
    struct Params_UpdateHotSpotRadius {
    }; // Size: 0x0
    Params_UpdateHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::SetRevealed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.SetRevealed"));
    struct Params_SetRevealed {
    }; // Size: 0x0
    Params_SetRevealed params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::UpdateOuterRadius(float AngleRatio, float DistanceRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.UpdateOuterRadius"));
    struct Params_UpdateOuterRadius {
        float AngleRatio; // 0x0
        float DistanceRatio; // 0x4
    }; // Size: 0x8
    Params_UpdateOuterRadius params{};
    params.AngleRatio = (float)AngleRatio;
    params.DistanceRatio = (float)DistanceRatio;
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::UpdateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.UpdateHotSpot"));
    struct Params_UpdateHotSpot {
    }; // Size: 0x0
    Params_UpdateHotSpot params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::StartVFX(UNiagaraSystem* InAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.StartVFX"));
    struct Params_StartVFX {
        UNiagaraSystem* InAsset; // 0x0
    }; // Size: 0x8
    Params_StartVFX params{};
    params.InAsset = (UNiagaraSystem*)InAsset;
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::RevealedByRevelio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.RevealedByRevelio"));
    struct Params_RevealedByRevelio {
    }; // Size: 0x0
    Params_RevealedByRevelio params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::PlayerIsInHotSpot(AActor* InPlayerActor, bool bInHotSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.PlayerIsInHotSpot"));
    struct Params_PlayerIsInHotSpot {
        AActor* InPlayerActor; // 0x0
        bool bInHotSpot; // 0x8
    }; // Size: 0x9
    Params_PlayerIsInHotSpot params{};
    params.InPlayerActor = (AActor*)InPlayerActor;
    params.bInHotSpot = (bool)bInHotSpot;
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::HintedByRevelio(bool bWasHintedAt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.HintedByRevelio"));
    struct Params_HintedByRevelio {
        bool bWasHintedAt; // 0x0
    }; // Size: 0x1
    Params_HintedByRevelio params{};
    params.bWasHintedAt = (bool)bWasHintedAt;
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::PageCollected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.PageCollected"));
    struct Params_PageCollected {
    }; // Size: 0x0
    Params_PageCollected params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::ClearRevealed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.ClearRevealed"));
    struct Params_ClearRevealed {
    }; // Size: 0x0
    Params_ClearRevealed params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::NovaComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.NovaComplete"));
    struct Params_NovaComplete {
    }; // Size: 0x0
    Params_NovaComplete params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::Log(FString InLogString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.Log"));
    struct Params_Log {
        FString InLogString; // 0x0
    }; // Size: 0x10
    Params_Log params{};
    params.InLogString = (FString)InLogString;
    ProcessEvent(func, &params);
}
bool AFieldGuideHotSpot::IsRevealed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.IsRevealed"));
    struct Params_IsRevealed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRevealed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFieldGuideHotSpot::DestroyVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.DestroyVFX"));
    struct Params_DestroyVFX {
    }; // Size: 0x0
    Params_DestroyVFX params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::ExitedOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.ExitedOuterRadius"));
    struct Params_ExitedOuterRadius {
    }; // Size: 0x0
    Params_ExitedOuterRadius params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::ExitedHotSpotRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.ExitedHotSpotRadius"));
    struct Params_ExitedHotSpotRadius {
    }; // Size: 0x0
    Params_ExitedHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::EnteredOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.EnteredOuterRadius"));
    struct Params_EnteredOuterRadius {
    }; // Size: 0x0
    Params_EnteredOuterRadius params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::EnteredHotSpotRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.EnteredHotSpotRadius"));
    struct Params_EnteredHotSpotRadius {
    }; // Size: 0x0
    Params_EnteredHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::DeactivateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.DeactivateHotSpot"));
    struct Params_DeactivateHotSpot {
    }; // Size: 0x0
    Params_DeactivateHotSpot params{};
    ProcessEvent(func, &params);
}
void AFieldGuideHotSpot::ActivateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideHotSpot.ActivateHotSpot"));
    struct Params_ActivateHotSpot {
    }; // Size: 0x0
    Params_ActivateHotSpot params{};
    ProcessEvent(func, &params);
}
