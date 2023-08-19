#include "AActor.hpp"
#include "EHighContrastGameplayMarkup.hpp"
#include "EHighContrastGameplayNPCHint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFXAutoTriggerHighContrastGameplay.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
void UFXAutoTriggerHighContrastGameplay::HighContrastGameplayMarkupMeshImmediateVeryDangerous(UMeshComponent* MeshComponent, EHighContrastGameplayMarkup Markup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerHighContrastGameplay.HighContrastGameplayMarkupMeshImmediateVeryDangerous"));
    struct Params_HighContrastGameplayMarkupMeshImmediateVeryDangerous {
        UMeshComponent* MeshComponent; // 0x0
        EHighContrastGameplayMarkup Markup; // 0x8
    }; // Size: 0x9
    Params_HighContrastGameplayMarkupMeshImmediateVeryDangerous params{};
    params.MeshComponent = (UMeshComponent*)MeshComponent;
    params.Markup = (EHighContrastGameplayMarkup)Markup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFXAutoTriggerHighContrastGameplay::IsHighContrastGameplay(UObject* WorldContextObject, bool& bHighContrastGameplay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerHighContrastGameplay.IsHighContrastGameplay"));
    struct Params_IsHighContrastGameplay {
        UObject* WorldContextObject; // 0x0
        bool bHighContrastGameplay; // 0x8
    }; // Size: 0x9
    Params_IsHighContrastGameplay params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bHighContrastGameplay = (bool)bHighContrastGameplay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bHighContrastGameplay = params.bHighContrastGameplay;
}
UFXAutoTriggerHighContrastGameplay* UFXAutoTriggerHighContrastGameplay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerHighContrastGameplay");
    return (UFXAutoTriggerHighContrastGameplay*)res;
}
void UFXAutoTriggerHighContrastGameplay::RemoveNPCHighContrastGameplayHints(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerHighContrastGameplay.RemoveNPCHighContrastGameplayHints"));
    struct Params_RemoveNPCHighContrastGameplayHints {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_RemoveNPCHighContrastGameplayHints params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFXAutoTriggerHighContrastGameplay::HighContrastGameplayMarkupActorImmediateVeryDangerous(AActor* Actor, EHighContrastGameplayMarkup Markup, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerHighContrastGameplay.HighContrastGameplayMarkupActorImmediateVeryDangerous"));
    struct Params_HighContrastGameplayMarkupActorImmediateVeryDangerous {
        AActor* Actor; // 0x0
        EHighContrastGameplayMarkup Markup; // 0x8
        bool bIncludeChildren; // 0x9
    }; // Size: 0xa
    Params_HighContrastGameplayMarkupActorImmediateVeryDangerous params{};
    params.Actor = (AActor*)Actor;
    params.Markup = (EHighContrastGameplayMarkup)Markup;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFXAutoTriggerHighContrastGameplay::GetNPCHighContrastGameplayHint(AActor* Actor, EHighContrastGameplayNPCHint& Hint, bool& bHasHint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerHighContrastGameplay.GetNPCHighContrastGameplayHint"));
    struct Params_GetNPCHighContrastGameplayHint {
        AActor* Actor; // 0x0
        EHighContrastGameplayNPCHint Hint; // 0x8
        bool bHasHint; // 0x9
    }; // Size: 0xa
    Params_GetNPCHighContrastGameplayHint params{};
    params.Actor = (AActor*)Actor;
    params.Hint = (EHighContrastGameplayNPCHint)Hint;
    params.bHasHint = (bool)bHasHint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Hint = params.Hint;
    bHasHint = params.bHasHint;
}
void UFXAutoTriggerHighContrastGameplay::AddNPCHighContrastGameplayHint(AActor* Actor, EHighContrastGameplayNPCHint Hint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXAutoTriggerHighContrastGameplay.AddNPCHighContrastGameplayHint"));
    struct Params_AddNPCHighContrastGameplayHint {
        AActor* Actor; // 0x0
        EHighContrastGameplayNPCHint Hint; // 0x8
    }; // Size: 0x9
    Params_AddNPCHighContrastGameplayHint params{};
    params.Actor = (AActor*)Actor;
    params.Hint = (EHighContrastGameplayNPCHint)Hint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
