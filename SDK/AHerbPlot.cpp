#include "AHerb.hpp"
#include "AHerbPlot.hpp"
#include "AInteractiveObjectActor.hpp"
#include "EHerbGrowthState.hpp"
#include "UAkAudioEvent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UHerbPlotState.hpp"
AHerbPlot* AHerbPlot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HerbPlot");
    return (AHerbPlot*)res;
}
void AHerbPlot::OpenPlotUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.OpenPlotUI"));
    struct Params_OpenPlotUI {
    }; // Size: 0x0
    Params_OpenPlotUI params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::SetPlotNeighborsFromChildComponents(TArray<UChildActorComponent*>& ChildComponents, bool bLoopNeighbors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.SetPlotNeighborsFromChildComponents"));
    struct Params_SetPlotNeighborsFromChildComponents {
        TArray<UChildActorComponent*> ChildComponents; // 0x0
        bool bLoopNeighbors; // 0x10
    }; // Size: 0x11
    Params_SetPlotNeighborsFromChildComponents params{};
    params.ChildComponents = (TArray<UChildActorComponent*>)ChildComponents;
    params.bLoopNeighbors = (bool)bLoopNeighbors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ChildComponents = params.ChildComponents;
}
void AHerbPlot::PlantSeed(FName PlantID, FName InteractorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.PlantSeed"));
    struct Params_PlantSeed {
        FName PlantID; // 0x0
        FName InteractorID; // 0x8
    }; // Size: 0x10
    Params_PlantSeed params{};
    params.PlantID = (FName)PlantID;
    params.InteractorID = (FName)InteractorID;
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyInitialize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyInitialize"));
    struct Params_NotifyInitialize {
    }; // Size: 0x0
    Params_NotifyInitialize params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyHarvested(bool bIsMultiHarvest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyHarvested"));
    struct Params_NotifyHarvested {
        bool bIsMultiHarvest; // 0x0
    }; // Size: 0x1
    Params_NotifyHarvested params{};
    params.bIsMultiHarvest = (bool)bIsMultiHarvest;
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyHerbPlanted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyHerbPlanted"));
    struct Params_NotifyHerbPlanted {
    }; // Size: 0x0
    Params_NotifyHerbPlanted params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyHerbDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyHerbDestroyed"));
    struct Params_NotifyHerbDestroyed {
    }; // Size: 0x0
    Params_NotifyHerbDestroyed params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyGrowAfterInitialize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyGrowAfterInitialize"));
    struct Params_NotifyGrowAfterInitialize {
    }; // Size: 0x0
    Params_NotifyGrowAfterInitialize params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyFertilized(bool IsFertilized, FName FertilizerID, bool IsInitialState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyFertilized"));
    struct Params_NotifyFertilized {
        bool IsFertilized; // 0x0
        char pad_1[0x3];
        FName FertilizerID; // 0x4
        bool IsInitialState; // 0xc
    }; // Size: 0xd
    Params_NotifyFertilized params{};
    params.IsFertilized = (bool)IsFertilized;
    params.FertilizerID = (FName)FertilizerID;
    params.IsInitialState = (bool)IsInitialState;
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyCompleteGrowth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyCompleteGrowth"));
    struct Params_NotifyCompleteGrowth {
    }; // Size: 0x0
    Params_NotifyCompleteGrowth params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::NotifyBeginGrowth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.NotifyBeginGrowth"));
    struct Params_NotifyBeginGrowth {
    }; // Size: 0x0
    Params_NotifyBeginGrowth params{};
    ProcessEvent(func, &params);
}
AHerb* AHerbPlot::GetPlantedHerb() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.GetPlantedHerb"));
    struct Params_GetPlantedHerb {
        AHerb* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlantedHerb params{};
    ProcessEvent(func, &params);
    return (AHerb*)params.ReturnValue;
}
bool AHerbPlot::IsInLineWithNeighbors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.IsInLineWithNeighbors"));
    struct Params_IsInLineWithNeighbors {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInLineWithNeighbors params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AHerbPlot::HerbPlotBecomeInactiveDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.HerbPlot.HerbPlotBecomeInactiveDelegate__DelegateSignature"));
    struct Params_HerbPlotBecomeInactiveDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_HerbPlotBecomeInactiveDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::HerbPlotBecomeActiveDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.HerbPlot.HerbPlotBecomeActiveDelegate__DelegateSignature"));
    struct Params_HerbPlotBecomeActiveDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_HerbPlotBecomeActiveDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::HarvestHerb(FName CollectorCharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.HarvestHerb"));
    struct Params_HarvestHerb {
        FName CollectorCharacterID; // 0x0
    }; // Size: 0x8
    Params_HarvestHerb params{};
    params.CollectorCharacterID = (FName)CollectorCharacterID;
    ProcessEvent(func, &params);
}
UHerbPlotState* AHerbPlot::GetPlotState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.GetPlotState"));
    struct Params_GetPlotState {
        UHerbPlotState* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlotState params{};
    ProcessEvent(func, &params);
    return (UHerbPlotState*)params.ReturnValue;
}
void AHerbPlot::ForceState(FName PlantID, FName FertilizerID, EHerbGrowthState GrowthState, float GrowthProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.ForceState"));
    struct Params_ForceState {
        FName PlantID; // 0x0
        FName FertilizerID; // 0x8
        EHerbGrowthState GrowthState; // 0x10
        char pad_11[0x3];
        float GrowthProgress; // 0x14
    }; // Size: 0x18
    Params_ForceState params{};
    params.PlantID = (FName)PlantID;
    params.FertilizerID = (FName)FertilizerID;
    params.GrowthState = (EHerbGrowthState)GrowthState;
    params.GrowthProgress = (float)GrowthProgress;
    ProcessEvent(func, &params);
}
void AHerbPlot::ForceGrowthState(EHerbGrowthState GrowthState, float GrowthProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.ForceGrowthState"));
    struct Params_ForceGrowthState {
        EHerbGrowthState GrowthState; // 0x0
        char pad_1[0x3];
        float GrowthProgress; // 0x4
    }; // Size: 0x8
    Params_ForceGrowthState params{};
    params.GrowthState = (EHerbGrowthState)GrowthState;
    params.GrowthProgress = (float)GrowthProgress;
    ProcessEvent(func, &params);
}
void AHerbPlot::EnableCustomCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.EnableCustomCamera"));
    struct Params_EnableCustomCamera {
    }; // Size: 0x0
    Params_EnableCustomCamera params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::DisableCustomCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.DisableCustomCamera"));
    struct Params_DisableCustomCamera {
    }; // Size: 0x0
    Params_DisableCustomCamera params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::DestroyHerb() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.DestroyHerb"));
    struct Params_DestroyHerb {
    }; // Size: 0x0
    Params_DestroyHerb params{};
    ProcessEvent(func, &params);
}
void AHerbPlot::ApplyFertilizer(FName FertilizerID, FName InteractorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlot.ApplyFertilizer"));
    struct Params_ApplyFertilizer {
        FName FertilizerID; // 0x0
        FName InteractorID; // 0x8
    }; // Size: 0x10
    Params_ApplyFertilizer params{};
    params.FertilizerID = (FName)FertilizerID;
    params.InteractorID = (FName)InteractorID;
    ProcessEvent(func, &params);
}
