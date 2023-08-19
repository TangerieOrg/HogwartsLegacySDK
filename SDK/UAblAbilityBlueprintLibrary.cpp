#include "AActor.hpp"
#include "EAblAbilityStartResult.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityBlueprintLibrary.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblCustomTaskScratchPad.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
bool UAblAbilityBlueprintLibrary::SetDrawCollisionQueries(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.SetDrawCollisionQueries"));
    struct Params_SetDrawCollisionQueries {
        bool Enable; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetDrawCollisionQueries params{};
    params.Enable = (bool)Enable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAblAbilityBlueprintLibrary* UAblAbilityBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityBlueprintLibrary");
    return (UAblAbilityBlueprintLibrary*)res;
}
bool UAblAbilityBlueprintLibrary::IsSuccessfulStartResult(EAblAbilityStartResult Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.IsSuccessfulStartResult"));
    struct Params_IsSuccessfulStartResult {
        EAblAbilityStartResult Result; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsSuccessfulStartResult params{};
    params.Result = (EAblAbilityStartResult)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAblCustomTaskScratchPad* UAblAbilityBlueprintLibrary::CreateCustomScratchPad(UAblAbilityContext* Context, UClass* ScratchPadClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.CreateCustomScratchPad"));
    struct Params_CreateCustomScratchPad {
        UAblAbilityContext* Context; // 0x0
        UClass* ScratchPadClass; // 0x8
        UAblCustomTaskScratchPad* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateCustomScratchPad params{};
    params.Context = (UAblAbilityContext*)Context;
    params.ScratchPadClass = (UClass*)ScratchPadClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAblCustomTaskScratchPad*)params.ReturnValue;
}
bool UAblAbilityBlueprintLibrary::GetDrawCollisionQueries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.GetDrawCollisionQueries"));
    struct Params_GetDrawCollisionQueries {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDrawCollisionQueries params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UAblAbilityContext* UAblAbilityBlueprintLibrary::CreateAbilityContext(UAblAbility* Ability, UAblAbilityComponent* AbilityComponent, AActor* Owner, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.CreateAbilityContext"));
    struct Params_CreateAbilityContext {
        UAblAbility* Ability; // 0x0
        UAblAbilityComponent* AbilityComponent; // 0x8
        AActor* Owner; // 0x10
        AActor* Instigator; // 0x18
        UAblAbilityContext* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateAbilityContext params{};
    params.Ability = (UAblAbility*)Ability;
    params.AbilityComponent = (UAblAbilityComponent*)AbilityComponent;
    params.Owner = (AActor*)Owner;
    params.Instigator = (AActor*)Instigator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAblAbilityContext*)params.ReturnValue;
}
UAblAbility* UAblAbilityBlueprintLibrary::GetAbilityObjectFromClass(UClass* Class) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.GetAbilityObjectFromClass"));
    struct Params_GetAbilityObjectFromClass {
        UClass* Class; // 0x0
        UAblAbility* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAbilityObjectFromClass params{};
    params.Class = (UClass*)Class;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAblAbility*)params.ReturnValue;
}
EAblAbilityStartResult UAblAbilityBlueprintLibrary::ActivateAbility(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.AblAbilityBlueprintLibrary.ActivateAbility"));
    struct Params_ActivateAbility {
        UAblAbilityContext* Context; // 0x0
        EAblAbilityStartResult ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ActivateAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EAblAbilityStartResult)params.ReturnValue;
}
