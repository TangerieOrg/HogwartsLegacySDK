#include "AActor.hpp"
#include "APawn.hpp"
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UMercunaTrackActorProxy.hpp"
#include "UObject.hpp"
UMercunaTrackActorProxy* UMercunaTrackActorProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaTrackActorProxy");
    return (UMercunaTrackActorProxy*)res;
}
void UMercunaTrackActorProxy::OnMoveComplete(FAIRequestID RequestID, EMercunaMoveResult::Type Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaTrackActorProxy.OnMoveComplete"));
    struct Params_OnMoveComplete {
        FAIRequestID RequestID; // 0x0
        EMercunaMoveResult::Type Result; // 0x4
    }; // Size: 0x5
    Params_OnMoveComplete params{};
    params.RequestID = (FAIRequestID)RequestID;
    params.Result = (EMercunaMoveResult::Type)Result;
    ProcessEvent(func, &params);
}
UMercunaTrackActorProxy* UMercunaTrackActorProxy::MercunaTrackActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float Distance, float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaTrackActorProxy.MercunaTrackActor"));
    struct Params_MercunaTrackActor {
        UObject* WorldContextObject; // 0x0
        APawn* Pawn; // 0x8
        AActor* Actor; // 0x10
        float Distance; // 0x18
        float Speed; // 0x1c
        UMercunaTrackActorProxy* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_MercunaTrackActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Pawn = (APawn*)Pawn;
    params.Actor = (AActor*)Actor;
    params.Distance = (float)Distance;
    params.Speed = (float)Speed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMercunaTrackActorProxy*)params.ReturnValue;
}
