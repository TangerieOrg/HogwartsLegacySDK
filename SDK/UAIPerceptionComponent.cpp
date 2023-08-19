#include "AAIController.hpp"
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FActorPerceptionBlueprintInfo.hpp"
#include "UAIPerceptionComponent.hpp"
#include "UAISenseConfig.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UAIPerceptionComponent* UAIPerceptionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIPerceptionComponent");
    return (UAIPerceptionComponent*)res;
}
void UAIPerceptionComponent::GetKnownPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors"));
    struct Params_GetKnownPerceivedActors {
        UClass* SenseToUse; // 0x0
        TArray<AActor*> OutActors; // 0x8
    }; // Size: 0x18
    Params_GetKnownPerceivedActors params{};
    params.SenseToUse = (UClass*)SenseToUse;
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void UAIPerceptionComponent::GetCurrentlyPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors"));
    struct Params_GetCurrentlyPerceivedActors {
        UClass* SenseToUse; // 0x0
        TArray<AActor*> OutActors; // 0x8
    }; // Size: 0x18
    Params_GetCurrentlyPerceivedActors params{};
    params.SenseToUse = (UClass*)SenseToUse;
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void UAIPerceptionComponent::SetSenseEnabled(UClass* SenseClass, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled"));
    struct Params_SetSenseEnabled {
        UClass* SenseClass; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_SetSenseEnabled params{};
    params.SenseClass = (UClass*)SenseClass;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UAIPerceptionComponent::RequestStimuliListenerUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate"));
    struct Params_RequestStimuliListenerUpdate {
    }; // Size: 0x0
    Params_RequestStimuliListenerUpdate params{};
    ProcessEvent(func, &params);
}
void UAIPerceptionComponent::GetPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors"));
    struct Params_GetPerceivedActors {
        UClass* SenseToUse; // 0x0
        TArray<AActor*> OutActors; // 0x8
    }; // Size: 0x18
    Params_GetPerceivedActors params{};
    params.SenseToUse = (UClass*)SenseToUse;
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void UAIPerceptionComponent::OnOwnerEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay"));
    struct Params_OnOwnerEndPlay {
        AActor* Actor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnOwnerEndPlay params{};
    params.Actor = (AActor*)Actor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(UClass* SenseToUse, TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense"));
    struct Params_GetPerceivedHostileActorsBySense {
        UClass* SenseToUse; // 0x0
        TArray<AActor*> OutActors; // 0x8
    }; // Size: 0x18
    Params_GetPerceivedHostileActorsBySense params{};
    params.SenseToUse = (UClass*)SenseToUse;
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<AActor*>& OutActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors"));
    struct Params_GetPerceivedHostileActors {
        TArray<AActor*> OutActors; // 0x0
    }; // Size: 0x10
    Params_GetPerceivedHostileActors params{};
    params.OutActors = (TArray<AActor*>)OutActors;
    ProcessEvent(func, &params);
    OutActors = params.OutActors;
}
bool UAIPerceptionComponent::GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception"));
    struct Params_GetActorsPerception {
        AActor* Actor; // 0x0
        FActorPerceptionBlueprintInfo Info; // 0x8
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetActorsPerception params{};
    params.Actor = (AActor*)Actor;
    params.Info = (FActorPerceptionBlueprintInfo)Info;
    ProcessEvent(func, &params);
    Info = params.Info;
    return (bool)params.ReturnValue;
}
void UAIPerceptionComponent::ForgetAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AIPerceptionComponent.ForgetAll"));
    struct Params_ForgetAll {
    }; // Size: 0x0
    Params_ForgetAll params{};
    ProcessEvent(func, &params);
}
