#include "AActor.hpp"
#include "AForagable.hpp"
#include "ASanctuaryHousekeepingPlaceholder.hpp"
#include "AStreamingPlaceholderActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
ASanctuaryHousekeepingPlaceholder* ASanctuaryHousekeepingPlaceholder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryHousekeepingPlaceholder");
    return (ASanctuaryHousekeepingPlaceholder*)res;
}
void ASanctuaryHousekeepingPlaceholder::OnForagableCollected(AForagable* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryHousekeepingPlaceholder.OnForagableCollected"));
    struct Params_OnForagableCollected {
        AForagable* Actor; // 0x0
    }; // Size: 0x8
    Params_OnForagableCollected params{};
    params.Actor = (AForagable*)Actor;
    ProcessEvent(func, &params);
}
void ASanctuaryHousekeepingPlaceholder::OnChildActorEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryHousekeepingPlaceholder.OnChildActorEndPlay"));
    struct Params_OnChildActorEndPlay {
        AActor* Actor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnChildActorEndPlay params{};
    params.Actor = (AActor*)Actor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ASanctuaryHousekeepingPlaceholder::HandleBreakableDestroyed(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryHousekeepingPlaceholder.HandleBreakableDestroyed"));
    struct Params_HandleBreakableDestroyed {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_HandleBreakableDestroyed params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
