#include "AActor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UPhysicsSimViewBPHelper.hpp"
UPhysicsSimViewBPHelper* UPhysicsSimViewBPHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicsSimViewBPHelper");
    return (UPhysicsSimViewBPHelper*)res;
}
void UPhysicsSimViewBPHelper::SetActorId(AActor* Actor, FString ActorId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsSimViewBPHelper.SetActorId"));
    struct Params_SetActorId {
        AActor* Actor; // 0x0
        FString ActorId; // 0x8
    }; // Size: 0x18
    Params_SetActorId params{};
    params.Actor = (AActor*)Actor;
    params.ActorId = (FString)ActorId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhysicsSimViewBPHelper::DisableAutoSaveGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicsSimViewBPHelper.DisableAutoSaveGame"));
    struct Params_DisableAutoSaveGame {
    }; // Size: 0x0
    Params_DisableAutoSaveGame params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
