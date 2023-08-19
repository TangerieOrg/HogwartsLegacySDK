#include "ACreatureFeed.hpp"
#include "ACreatureFeedingStation.hpp"
#include "ACreature_Character.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "ECreatureFeedingStationSlotVisualState.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
#include "UClass.hpp"
#include "UCreatureFeedingStationState.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ACreatureFeedingStation::RegisterFeedingStationToBiome() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.RegisterFeedingStationToBiome"));
    struct Params_RegisterFeedingStationToBiome {
    }; // Size: 0x0
    Params_RegisterFeedingStationToBiome params{};
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::AssignToSlot(ACreature_Character* Creature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.AssignToSlot"));
    struct Params_AssignToSlot {
        ACreature_Character* Creature; // 0x0
    }; // Size: 0x8
    Params_AssignToSlot params{};
    params.Creature = (ACreature_Character*)Creature;
    ProcessEvent(func, &params);
}
ACreatureFeedingStation* ACreatureFeedingStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureFeedingStation");
    return (ACreatureFeedingStation*)res;
}
void ACreatureFeedingStation::UnregisterFeedingStationFromBiome() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.UnregisterFeedingStationFromBiome"));
    struct Params_UnregisterFeedingStationFromBiome {
    }; // Size: 0x0
    Params_UnregisterFeedingStationFromBiome params{};
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::OnFeedDispensed(ACreatureFeed* CreatureFeed, ACreature_Character* Creature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.OnFeedDispensed"));
    struct Params_OnFeedDispensed {
        ACreatureFeed* CreatureFeed; // 0x0
        ACreature_Character* Creature; // 0x8
    }; // Size: 0x10
    Params_OnFeedDispensed params{};
    params.CreatureFeed = (ACreatureFeed*)CreatureFeed;
    params.Creature = (ACreature_Character*)Creature;
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::UnhideFeed(UAnimInstance* FeederAnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.UnhideFeed"));
    struct Params_UnhideFeed {
        UAnimInstance* FeederAnimInstance; // 0x0
    }; // Size: 0x8
    Params_UnhideFeed params{};
    params.FeederAnimInstance = (UAnimInstance*)FeederAnimInstance;
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::ReleaseFeed(UAnimInstance* FeederAnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.ReleaseFeed"));
    struct Params_ReleaseFeed {
        UAnimInstance* FeederAnimInstance; // 0x0
    }; // Size: 0x8
    Params_ReleaseFeed params{};
    params.FeederAnimInstance = (UAnimInstance*)FeederAnimInstance;
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::Unassign(ACreature_Character* Creature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.Unassign"));
    struct Params_Unassign {
        ACreature_Character* Creature; // 0x0
    }; // Size: 0x8
    Params_Unassign params{};
    params.Creature = (ACreature_Character*)Creature;
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::SetSlotVisualState(int32_t SlotIdx, ECreatureFeedingStationSlotVisualState VisualState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.SetSlotVisualState"));
    struct Params_SetSlotVisualState {
        int32_t SlotIdx; // 0x0
        ECreatureFeedingStationSlotVisualState VisualState; // 0x4
    }; // Size: 0x5
    Params_SetSlotVisualState params{};
    params.SlotIdx = (int32_t)SlotIdx;
    params.VisualState = (ECreatureFeedingStationSlotVisualState)VisualState;
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::RemoveOneFeed(int32_t SlotIdx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.RemoveOneFeed"));
    struct Params_RemoveOneFeed {
        int32_t SlotIdx; // 0x0
    }; // Size: 0x4
    Params_RemoveOneFeed params{};
    params.SlotIdx = (int32_t)SlotIdx;
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::RefillEmptyFeederSlots() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.RefillEmptyFeederSlots"));
    struct Params_RefillEmptyFeederSlots {
    }; // Size: 0x0
    Params_RefillEmptyFeederSlots params{};
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::OnStartedConverting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.OnStartedConverting"));
    struct Params_OnStartedConverting {
    }; // Size: 0x0
    Params_OnStartedConverting params{};
    ProcessEvent(func, &params);
}
UCreatureFeedingStationState* ACreatureFeedingStation::GetFeedingStationState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.GetFeedingStationState"));
    struct Params_GetFeedingStationState {
        UCreatureFeedingStationState* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFeedingStationState params{};
    ProcessEvent(func, &params);
    return (UCreatureFeedingStationState*)params.ReturnValue;
}
void ACreatureFeedingStation::OnFeedConverted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.OnFeedConverted"));
    struct Params_OnFeedConverted {
    }; // Size: 0x0
    Params_OnFeedConverted params{};
    ProcessEvent(func, &params);
}
bool ACreatureFeedingStation::DispenseFeed(ACreature_Character* Creature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.DispenseFeed"));
    struct Params_DispenseFeed {
        ACreature_Character* Creature; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DispenseFeed params{};
    params.Creature = (ACreature_Character*)Creature;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACreatureFeedingStation::OnFeedAdded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.OnFeedAdded"));
    struct Params_OnFeedAdded {
    }; // Size: 0x0
    Params_OnFeedAdded params{};
    ProcessEvent(func, &params);
}
ECreatureFeedingStationSlotVisualState ACreatureFeedingStation::GetSlotVisualState(int32_t SlotIdx) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.GetSlotVisualState"));
    struct Params_GetSlotVisualState {
        int32_t SlotIdx; // 0x0
        ECreatureFeedingStationSlotVisualState ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetSlotVisualState params{};
    params.SlotIdx = (int32_t)SlotIdx;
    ProcessEvent(func, &params);
    return (ECreatureFeedingStationSlotVisualState)params.ReturnValue;
}
FTransform ACreatureFeedingStation::GetBestSlotTransform(ACreature_Character* Creature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.GetBestSlotTransform"));
    struct Params_GetBestSlotTransform {
        ACreature_Character* Creature; // 0x0
        char pad_8[0x8];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetBestSlotTransform params{};
    params.Creature = (ACreature_Character*)Creature;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void ACreatureFeedingStation::FindSlotComponents(TArray<USceneComponent*>& OutSlotComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.FindSlotComponents"));
    struct Params_FindSlotComponents {
        TArray<USceneComponent*> OutSlotComponents; // 0x0
    }; // Size: 0x10
    Params_FindSlotComponents params{};
    params.OutSlotComponents = (TArray<USceneComponent*>)OutSlotComponents;
    ProcessEvent(func, &params);
    OutSlotComponents = params.OutSlotComponents;
}
void ACreatureFeedingStation::ConvertAvailableFeederSlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.ConvertAvailableFeederSlot"));
    struct Params_ConvertAvailableFeederSlot {
    }; // Size: 0x0
    Params_ConvertAvailableFeederSlot params{};
    ProcessEvent(func, &params);
}
void ACreatureFeedingStation::BP_Init() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStation.BP_Init"));
    struct Params_BP_Init {
    }; // Size: 0x0
    Params_BP_Init params{};
    ProcessEvent(func, &params);
}
