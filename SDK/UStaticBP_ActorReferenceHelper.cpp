#include "AActor.hpp"
#include "FWorldActorReference.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStaticBP_ActorReferenceHelper.hpp"
bool UStaticBP_ActorReferenceHelper::GetActorFromReference(UObject* WorldContext, FWorldActorReference ActorReference, AActor*& Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.StaticBP_ActorReferenceHelper.GetActorFromReference"));
    struct Params_GetActorFromReference {
        UObject* WorldContext; // 0x0
        FWorldActorReference ActorReference; // 0x8
        AActor* Actor; // 0x28
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetActorFromReference params{};
    params.WorldContext = (UObject*)WorldContext;
    params.ActorReference = (FWorldActorReference)ActorReference;
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Actor = params.Actor;
    return (bool)params.ReturnValue;
}
UStaticBP_ActorReferenceHelper* UStaticBP_ActorReferenceHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.StaticBP_ActorReferenceHelper");
    return (UStaticBP_ActorReferenceHelper*)res;
}
