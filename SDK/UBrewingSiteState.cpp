#include "EBrewingState.hpp"
#include "FRecipeIngredient.hpp"
#include "FTimespan.hpp"
#include "UBrewingSiteState.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UBrewingSiteState::GetIsInSanctuary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetIsInSanctuary"));
    struct Params_GetIsInSanctuary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInSanctuary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBrewingSiteState* UBrewingSiteState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BrewingSiteState");
    return (UBrewingSiteState*)res;
}
FName UBrewingSiteState::GetPotionID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetPotionID"));
    struct Params_GetPotionID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPotionID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UBrewingSiteState::InstantlyCompleteBrewing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.InstantlyCompleteBrewing"));
    struct Params_InstantlyCompleteBrewing {
    }; // Size: 0x0
    Params_InstantlyCompleteBrewing params{};
    ProcessEvent(func, &params);
}
int32_t UBrewingSiteState::GetUncollectedYield() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetUncollectedYield"));
    struct Params_GetUncollectedYield {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUncollectedYield params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName UBrewingSiteState::GetOutputItemID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetOutputItemID"));
    struct Params_GetOutputItemID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOutputItemID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FTimespan UBrewingSiteState::GetBrewingTimeRemaining() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetBrewingTimeRemaining"));
    struct Params_GetBrewingTimeRemaining {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBrewingTimeRemaining params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
int32_t UBrewingSiteState::GetRecipeYield() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetRecipeYield"));
    struct Params_GetRecipeYield {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRecipeYield params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FRecipeIngredient> UBrewingSiteState::GetRecipeIngredients() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetRecipeIngredients"));
    struct Params_GetRecipeIngredients {
        TArray<FRecipeIngredient> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRecipeIngredients params{};
    ProcessEvent(func, &params);
    return (TArray<FRecipeIngredient>)params.ReturnValue;
}
bool UBrewingSiteState::GetHasInventorySpaceToCollectPotion(FName CollectorID, int32_t& OutYieldLeft) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetHasInventorySpaceToCollectPotion"));
    struct Params_GetHasInventorySpaceToCollectPotion {
        FName CollectorID; // 0x0
        int32_t OutYieldLeft; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetHasInventorySpaceToCollectPotion params{};
    params.CollectorID = (FName)CollectorID;
    params.OutYieldLeft = (int32_t)OutYieldLeft;
    ProcessEvent(func, &params);
    OutYieldLeft = params.OutYieldLeft;
    return (bool)params.ReturnValue;
}
EBrewingState UBrewingSiteState::GetBrewingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetBrewingState"));
    struct Params_GetBrewingState {
        EBrewingState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBrewingState params{};
    ProcessEvent(func, &params);
    return (EBrewingState)params.ReturnValue;
}
float UBrewingSiteState::GetBrewingProgressRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BrewingSiteState.GetBrewingProgressRatio"));
    struct Params_GetBrewingProgressRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBrewingProgressRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
