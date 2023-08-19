#include "FAnimationBudgetAllocatorParameters.hpp"
#include "UAnimationBudgetBlueprintLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAnimationBudgetBlueprintLibrary* UAnimationBudgetBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
    return (UAnimationBudgetBlueprintLibrary*)res;
}
void UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters"));
    struct Params_SetAnimationBudgetParameters {
        UObject* WorldContextObject; // 0x0
        FAnimationBudgetAllocatorParameters InParameters; // 0x8
    }; // Size: 0x58
    Params_SetAnimationBudgetParameters params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InParameters = (FAnimationBudgetAllocatorParameters)InParameters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InParameters = params.InParameters;
}
void UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(UObject* WorldContextObject, bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget"));
    struct Params_EnableAnimationBudget {
        UObject* WorldContextObject; // 0x0
        bool bEnabled; // 0x8
    }; // Size: 0x9
    Params_EnableAnimationBudget params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
