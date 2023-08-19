#include "AActor.hpp"
#include "AMaterialPermuterSingleton.hpp"
#include "FMaterialPermuterLoadTriggerProperty.hpp"
#include "FMaterialPermuterMIDCache.hpp"
#include "FMaterialPermuterSwapTracker.hpp"
#include "FMaterialSwapActorFadeStates.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterLibrary.hpp"
#include "UMaterialPermuterLiveMaterials.hpp"
#include "UObject.hpp"
void AMaterialPermuterSingleton::IsLoadingTriggerSet(UObject* TriggerOwner, FName Trigger, bool& bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.IsLoadingTriggerSet"));
    struct Params_IsLoadingTriggerSet {
        UObject* TriggerOwner; // 0x0
        FName Trigger; // 0x8
        bool bSet; // 0x10
    }; // Size: 0x11
    Params_IsLoadingTriggerSet params{};
    params.TriggerOwner = (UObject*)TriggerOwner;
    params.Trigger = (FName)Trigger;
    params.bSet = (bool)bSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSet = params.bSet;
}
AMaterialPermuterSingleton* AMaterialPermuterSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterSingleton");
    return (AMaterialPermuterSingleton*)res;
}
void AMaterialPermuterSingleton::SetLoadingTrigger(UObject* TriggerOwner, FName Trigger) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.SetLoadingTrigger"));
    struct Params_SetLoadingTrigger {
        UObject* TriggerOwner; // 0x0
        FName Trigger; // 0x8
    }; // Size: 0x10
    Params_SetLoadingTrigger params{};
    params.TriggerOwner = (UObject*)TriggerOwner;
    params.Trigger = (FName)Trigger;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMaterialPermuterSingleton::ProhibitActorFade(AActor* Actor, bool bProhibit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.ProhibitActorFade"));
    struct Params_ProhibitActorFade {
        AActor* Actor; // 0x0
        bool bProhibit; // 0x8
    }; // Size: 0x9
    Params_ProhibitActorFade params{};
    params.Actor = (AActor*)Actor;
    params.bProhibit = (bool)bProhibit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMaterialPermuterSingleton::PauseAllActorFading(UObject* WorldContextObject, bool bPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.PauseAllActorFading"));
    struct Params_PauseAllActorFading {
        UObject* WorldContextObject; // 0x0
        bool bPause; // 0x8
    }; // Size: 0x9
    Params_PauseAllActorFading params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bPause = (bool)bPause;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool AMaterialPermuterSingleton::IsAllActorFadingPaused(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.IsAllActorFadingPaused"));
    struct Params_IsAllActorFadingPaused {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAllActorFadingPaused params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMaterialPermuterSingleton::LoadingTriggerSet(FName Trigger, bool& bSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.LoadingTriggerSet"));
    struct Params_LoadingTriggerSet {
        FName Trigger; // 0x0
        bool bSet; // 0x8
    }; // Size: 0x9
    Params_LoadingTriggerSet params{};
    params.Trigger = (FName)Trigger;
    params.bSet = (bool)bSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSet = params.bSet;
}
bool AMaterialPermuterSingleton::IsActorFadeProhibited(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.IsActorFadeProhibited"));
    struct Params_IsActorFadeProhibited {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorFadeProhibited params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName AMaterialPermuterSingleton::GetTriggerPropertyName(FMaterialPermuterLoadTriggerProperty TriggerProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.GetTriggerPropertyName"));
    struct Params_GetTriggerPropertyName {
        FMaterialPermuterLoadTriggerProperty TriggerProperty; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetTriggerPropertyName params{};
    params.TriggerProperty = (FMaterialPermuterLoadTriggerProperty)TriggerProperty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void AMaterialPermuterSingleton::ClearLoadingTrigger(UObject* TriggerOwner, FName Trigger) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterSingleton.ClearLoadingTrigger"));
    struct Params_ClearLoadingTrigger {
        UObject* TriggerOwner; // 0x0
        FName Trigger; // 0x8
    }; // Size: 0x10
    Params_ClearLoadingTrigger params{};
    params.TriggerOwner = (UObject*)TriggerOwner;
    params.Trigger = (FName)Trigger;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
