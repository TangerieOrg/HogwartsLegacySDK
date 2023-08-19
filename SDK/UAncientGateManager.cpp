#include "AActor.hpp"
#include "ECollisionResponse.hpp"
#include "UActorComponent.hpp"
#include "UAncientGateManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAncientGateManager::SetAncientGateCollision(AActor* Actor, ECollisionResponse CollisionResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientGateManager.SetAncientGateCollision"));
    struct Params_SetAncientGateCollision {
        AActor* Actor; // 0x0
        ECollisionResponse CollisionResponse; // 0x8
    }; // Size: 0x9
    Params_SetAncientGateCollision params{};
    params.Actor = (AActor*)Actor;
    params.CollisionResponse = (ECollisionResponse)CollisionResponse;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAncientGateManager* UAncientGateManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientGateManager");
    return (UAncientGateManager*)res;
}
void UAncientGateManager::GetAncientGatePrimitives(AActor* Actor, TArray<UActorComponent*>& Primitives) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientGateManager.GetAncientGatePrimitives"));
    struct Params_GetAncientGatePrimitives {
        AActor* Actor; // 0x0
        TArray<UActorComponent*> Primitives; // 0x8
    }; // Size: 0x18
    Params_GetAncientGatePrimitives params{};
    params.Actor = (AActor*)Actor;
    params.Primitives = (TArray<UActorComponent*>)Primitives;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Primitives = params.Primitives;
}
UAncientGateManager* UAncientGateManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientGateManager.Get"));
    struct Params_Get {
        UAncientGateManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAncientGateManager*)params.ReturnValue;
}
