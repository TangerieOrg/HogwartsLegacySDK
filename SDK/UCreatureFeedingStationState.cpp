#include "EItemConversionState.hpp"
#include "UCreatureFeedingStationState.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
int32_t UCreatureFeedingStationState::GetNumFeedSlots() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStationState.GetNumFeedSlots"));
    struct Params_GetNumFeedSlots {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumFeedSlots params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UCreatureFeedingStationState* UCreatureFeedingStationState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureFeedingStationState");
    return (UCreatureFeedingStationState*)res;
}
bool UCreatureFeedingStationState::HasFeedAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStationState.HasFeedAvailable"));
    struct Params_HasFeedAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasFeedAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreatureFeedingStationState::FinalizeCurrentConversion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStationState.FinalizeCurrentConversion"));
    struct Params_FinalizeCurrentConversion {
    }; // Size: 0x0
    Params_FinalizeCurrentConversion params{};
    ProcessEvent(func, &params);
}
bool UCreatureFeedingStationState::HasEmptySlot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStationState.HasEmptySlot"));
    struct Params_HasEmptySlot {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasEmptySlot params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EItemConversionState UCreatureFeedingStationState::GetConversionState(int32_t SlotIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingStationState.GetConversionState"));
    struct Params_GetConversionState {
        int32_t SlotIndex; // 0x0
        EItemConversionState ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetConversionState params{};
    params.SlotIndex = (int32_t)SlotIndex;
    ProcessEvent(func, &params);
    return (EItemConversionState)params.ReturnValue;
}
