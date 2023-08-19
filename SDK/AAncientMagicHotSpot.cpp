#include "AActor.hpp"
#include "AAncientMagicHotSpot.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
void AAncientMagicHotSpot::EnteredInnerRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.EnteredInnerRadius"));
    struct Params_EnteredInnerRadius {
    }; // Size: 0x0
    Params_EnteredInnerRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::PlayerIsInHotSpot(AActor* InPlayerActor, bool bInHotSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.PlayerIsInHotSpot"));
    struct Params_PlayerIsInHotSpot {
        AActor* InPlayerActor; // 0x0
        bool bInHotSpot; // 0x8
    }; // Size: 0x9
    Params_PlayerIsInHotSpot params{};
    params.InPlayerActor = (AActor*)InPlayerActor;
    params.bInHotSpot = (bool)bInHotSpot;
    ProcessEvent(func, &params);
}
AAncientMagicHotSpot* AAncientMagicHotSpot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicHotSpot");
    return (AAncientMagicHotSpot*)res;
}
void AAncientMagicHotSpot::UpdateVFX(float AngleRatio, float DistanceRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.UpdateVFX"));
    struct Params_UpdateVFX {
        float AngleRatio; // 0x0
        float DistanceRatio; // 0x4
    }; // Size: 0x8
    Params_UpdateVFX params{};
    params.AngleRatio = (float)AngleRatio;
    params.DistanceRatio = (float)DistanceRatio;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::EnableInteract() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.EnableInteract"));
    struct Params_EnableInteract {
    }; // Size: 0x0
    Params_EnableInteract params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::UpdateOuterRadius(float AngleRatio, float DistanceRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.UpdateOuterRadius"));
    struct Params_UpdateOuterRadius {
        float AngleRatio; // 0x0
        float DistanceRatio; // 0x4
    }; // Size: 0x8
    Params_UpdateOuterRadius params{};
    params.AngleRatio = (float)AngleRatio;
    params.DistanceRatio = (float)DistanceRatio;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::UpdateInnerRadius(float AngleRatio, float Ratio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.UpdateInnerRadius"));
    struct Params_UpdateInnerRadius {
        float AngleRatio; // 0x0
        float Ratio; // 0x4
    }; // Size: 0x8
    Params_UpdateInnerRadius params{};
    params.AngleRatio = (float)AngleRatio;
    params.Ratio = (float)Ratio;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::UnHide() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.UnHide"));
    struct Params_UnHide {
    }; // Size: 0x0
    Params_UnHide params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::UpdateHotSpotRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.UpdateHotSpotRadius"));
    struct Params_UpdateHotSpotRadius {
    }; // Size: 0x0
    Params_UpdateHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::TrackFootPlants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.TrackFootPlants"));
    struct Params_TrackFootPlants {
    }; // Size: 0x0
    Params_TrackFootPlants params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::UpdateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.UpdateHotSpot"));
    struct Params_UpdateHotSpot {
    }; // Size: 0x0
    Params_UpdateHotSpot params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::StopTrackingFootPlants() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.StopTrackingFootPlants"));
    struct Params_StopTrackingFootPlants {
    }; // Size: 0x0
    Params_StopTrackingFootPlants params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::StartVFX(UNiagaraSystem* InAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.StartVFX"));
    struct Params_StartVFX {
        UNiagaraSystem* InAsset; // 0x0
    }; // Size: 0x8
    Params_StartVFX params{};
    params.InAsset = (UNiagaraSystem*)InAsset;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::Reactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.Reactivate"));
    struct Params_Reactivate {
    }; // Size: 0x0
    Params_Reactivate params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::FireWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.FireWand"));
    struct Params_FireWand {
    }; // Size: 0x0
    Params_FireWand params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::NovaComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.NovaComplete"));
    struct Params_NovaComplete {
    }; // Size: 0x0
    Params_NovaComplete params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::ForceActivateHotSpot(AActor* InPlayerActor, float InRadiiMultiplier, float InHeightMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.ForceActivateHotSpot"));
    struct Params_ForceActivateHotSpot {
        AActor* InPlayerActor; // 0x0
        float InRadiiMultiplier; // 0x8
        float InHeightMultiplier; // 0xc
    }; // Size: 0x10
    Params_ForceActivateHotSpot params{};
    params.InPlayerActor = (AActor*)InPlayerActor;
    params.InRadiiMultiplier = (float)InRadiiMultiplier;
    params.InHeightMultiplier = (float)InHeightMultiplier;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::LogList(TArray<AActor*>& LogActorList, FString HeaderInfo, FString PerActorInfo, FString PerActorExtraInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.LogList"));
    struct Params_LogList {
        TArray<AActor*> LogActorList; // 0x0
        FString HeaderInfo; // 0x10
        FString PerActorInfo; // 0x20
        FString PerActorExtraInfo; // 0x30
    }; // Size: 0x40
    Params_LogList params{};
    params.LogActorList = (TArray<AActor*>)LogActorList;
    params.HeaderInfo = (FString)HeaderInfo;
    params.PerActorInfo = (FString)PerActorInfo;
    params.PerActorExtraInfo = (FString)PerActorExtraInfo;
    ProcessEvent(func, &params);
    LogActorList = params.LogActorList;
}
void AAncientMagicHotSpot::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::Log(FString Info, UObject* LogObjectName, FString ExtraInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.Log"));
    struct Params_Log {
        FString Info; // 0x0
        UObject* LogObjectName; // 0x10
        FString ExtraInfo; // 0x18
    }; // Size: 0x28
    Params_Log params{};
    params.Info = (FString)Info;
    params.LogObjectName = (UObject*)LogObjectName;
    params.ExtraInfo = (FString)ExtraInfo;
    ProcessEvent(func, &params);
}
bool AAncientMagicHotSpot::IsHotspotBeingForcedActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.IsHotspotBeingForcedActive"));
    struct Params_IsHotspotBeingForcedActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHotspotBeingForcedActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AAncientMagicHotSpot::HotSpotWasForcedInactive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.HotSpotWasForcedInactive"));
    struct Params_HotSpotWasForcedInactive {
    }; // Size: 0x0
    Params_HotSpotWasForcedInactive params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::HotSpotWasForcedActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.HotSpotWasForcedActive"));
    struct Params_HotSpotWasForcedActive {
    }; // Size: 0x0
    Params_HotSpotWasForcedActive params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::HideRevealOBJ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.HideRevealOBJ"));
    struct Params_HideRevealOBJ {
    }; // Size: 0x0
    Params_HideRevealOBJ params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::EnteredHotSpotRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.EnteredHotSpotRadius"));
    struct Params_EnteredHotSpotRadius {
    }; // Size: 0x0
    Params_EnteredHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::HideHideOBJ() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.HideHideOBJ"));
    struct Params_HideHideOBJ {
    }; // Size: 0x0
    Params_HideHideOBJ params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::GetLoggingIsEnabled(bool& bLoggingIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.GetLoggingIsEnabled"));
    struct Params_GetLoggingIsEnabled {
        bool bLoggingIsEnabled; // 0x0
    }; // Size: 0x1
    Params_GetLoggingIsEnabled params{};
    params.bLoggingIsEnabled = (bool)bLoggingIsEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bLoggingIsEnabled = params.bLoggingIsEnabled;
}
void AAncientMagicHotSpot::ForceDeactivateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.ForceDeactivateHotSpot"));
    struct Params_ForceDeactivateHotSpot {
    }; // Size: 0x0
    Params_ForceDeactivateHotSpot params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::FootPlantOccurred(FVector FootLocation, FRotator FootRotator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.FootPlantOccurred"));
    struct Params_FootPlantOccurred {
        FVector FootLocation; // 0x0
        FRotator FootRotator; // 0xc
    }; // Size: 0x18
    Params_FootPlantOccurred params{};
    params.FootLocation = (FVector)FootLocation;
    params.FootRotator = (FRotator)FootRotator;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::DestroyVFX() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.DestroyVFX"));
    struct Params_DestroyVFX {
    }; // Size: 0x0
    Params_DestroyVFX params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::ExitedOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.ExitedOuterRadius"));
    struct Params_ExitedOuterRadius {
    }; // Size: 0x0
    Params_ExitedOuterRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::ExitedInnerRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.ExitedInnerRadius"));
    struct Params_ExitedInnerRadius {
    }; // Size: 0x0
    Params_ExitedInnerRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::ExitedHotSpotRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.ExitedHotSpotRadius"));
    struct Params_ExitedHotSpotRadius {
    }; // Size: 0x0
    Params_ExitedHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::EnteredOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.EnteredOuterRadius"));
    struct Params_EnteredOuterRadius {
    }; // Size: 0x0
    Params_EnteredOuterRadius params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::Done(bool DeactivateHotSpot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.Done"));
    struct Params_Done {
        bool DeactivateHotSpot; // 0x0
    }; // Size: 0x1
    Params_Done params{};
    params.DeactivateHotSpot = (bool)DeactivateHotSpot;
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::DeactivateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.DeactivateHotSpot"));
    struct Params_DeactivateHotSpot {
    }; // Size: 0x0
    Params_DeactivateHotSpot params{};
    ProcessEvent(func, &params);
}
void AAncientMagicHotSpot::ActivateHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicHotSpot.ActivateHotSpot"));
    struct Params_ActivateHotSpot {
    }; // Size: 0x0
    Params_ActivateHotSpot params{};
    ProcessEvent(func, &params);
}
