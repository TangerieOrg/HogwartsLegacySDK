#include "AHerb.hpp"
#include "AHerbPlot.hpp"
#include "AInteractiveObjectActor.hpp"
#include "UFunction.hpp"
AHerbPlot* AHerb::GetPlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.GetPlot"));
    struct Params_GetPlot {
        AHerbPlot* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlot params{};
    ProcessEvent(func, &params);
    return (AHerbPlot*)params.ReturnValue;
}
AHerb* AHerb::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Herb");
    return (AHerb*)res;
}
void AHerb::NotifyStageChange(int32_t NewStage, bool bIsInitialState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.NotifyStageChange"));
    struct Params_NotifyStageChange {
        int32_t NewStage; // 0x0
        bool bIsInitialState; // 0x4
    }; // Size: 0x5
    Params_NotifyStageChange params{};
    params.NewStage = (int32_t)NewStage;
    params.bIsInitialState = (bool)bIsInitialState;
    ProcessEvent(func, &params);
}
bool AHerb::TryCreateBeacon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.TryCreateBeacon"));
    struct Params_TryCreateBeacon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TryCreateBeacon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AHerb::IsMultiHarvestable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.IsMultiHarvestable"));
    struct Params_IsMultiHarvestable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMultiHarvestable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AHerb::IsInPlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.IsInPlot"));
    struct Params_IsInPlot {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInPlot params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AHerb::IsFinalStage(int32_t Stage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.IsFinalStage"));
    struct Params_IsFinalStage {
        int32_t Stage; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsFinalStage params{};
    params.Stage = (int32_t)Stage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName AHerb::GetPlantByproductID(FName PlantID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.GetPlantByproductID"));
    struct Params_GetPlantByproductID {
        FName PlantID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetPlantByproductID params{};
    params.PlantID = (FName)PlantID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t AHerb::GetNumStages() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.GetNumStages"));
    struct Params_GetNumStages {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumStages params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool AHerb::GetHasInventorySpaceToHarvestPlantOfType(FName PlantID, FName CollectorCharacterID, FName FertilizerID, bool bIsPlanted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.GetHasInventorySpaceToHarvestPlantOfType"));
    struct Params_GetHasInventorySpaceToHarvestPlantOfType {
        FName PlantID; // 0x0
        FName CollectorCharacterID; // 0x8
        FName FertilizerID; // 0x10
        bool bIsPlanted; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetHasInventorySpaceToHarvestPlantOfType params{};
    params.PlantID = (FName)PlantID;
    params.CollectorCharacterID = (FName)CollectorCharacterID;
    params.FertilizerID = (FName)FertilizerID;
    params.bIsPlanted = (bool)bIsPlanted;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AHerb::FinishHarvestingHerb() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.FinishHarvestingHerb"));
    struct Params_FinishHarvestingHerb {
    }; // Size: 0x0
    Params_FinishHarvestingHerb params{};
    ProcessEvent(func, &params);
}
void AHerb::BP_NotifyHerbPlanted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.BP_NotifyHerbPlanted"));
    struct Params_BP_NotifyHerbPlanted {
    }; // Size: 0x0
    Params_BP_NotifyHerbPlanted params{};
    ProcessEvent(func, &params);
}
void AHerb::BP_NotifyHerbHarvested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.BP_NotifyHerbHarvested"));
    struct Params_BP_NotifyHerbHarvested {
    }; // Size: 0x0
    Params_BP_NotifyHerbHarvested params{};
    ProcessEvent(func, &params);
}
void AHerb::BP_NotifyHerbDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Herb.BP_NotifyHerbDestroyed"));
    struct Params_BP_NotifyHerbDestroyed {
    }; // Size: 0x0
    Params_BP_NotifyHerbDestroyed params{};
    ProcessEvent(func, &params);
}
