#include "AActor.hpp"
#include "APawn.hpp"
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UMercunaMoveToProxy.hpp"
#include "UObject.hpp"
UMercunaMoveToProxy* UMercunaMoveToProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaMoveToProxy");
    return (UMercunaMoveToProxy*)res;
}
void UMercunaMoveToProxy::OnMoveComplete(FAIRequestID RequestID, EMercunaMoveResult::Type Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaMoveToProxy.OnMoveComplete"));
    struct Params_OnMoveComplete {
        FAIRequestID RequestID; // 0x0
        EMercunaMoveResult::Type Result; // 0x4
    }; // Size: 0x5
    Params_OnMoveComplete params{};
    params.RequestID = (FAIRequestID)RequestID;
    params.Result = (EMercunaMoveResult::Type)Result;
    ProcessEvent(func, &params);
}
UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToLocations(UObject* WorldContextObject, APawn*& Pawn, TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaMoveToProxy.MercunaMoveToLocations"));
    struct Params_MercunaMoveToLocations {
        UObject* WorldContextObject; // 0x0
        APawn* Pawn; // 0x8
        TArray<FVector> Destinations; // 0x10
        float EndDistance; // 0x20
        float Speed; // 0x24
        bool UsePartialPath; // 0x28
        char pad_29[0x7];
        UMercunaMoveToProxy* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_MercunaMoveToLocations params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Pawn = (APawn*)Pawn;
    params.Destinations = (TArray<FVector>)Destinations;
    params.EndDistance = (float)EndDistance;
    params.Speed = (float)Speed;
    params.UsePartialPath = (bool)UsePartialPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Pawn = params.Pawn;
    Destinations = params.Destinations;
    return (UMercunaMoveToProxy*)params.ReturnValue;
}
UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToLocation(UObject* WorldContextObject, APawn* Pawn, FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaMoveToProxy.MercunaMoveToLocation"));
    struct Params_MercunaMoveToLocation {
        UObject* WorldContextObject; // 0x0
        APawn* Pawn; // 0x8
        FVector Destination; // 0x10
        float EndDistance; // 0x1c
        float Speed; // 0x20
        bool UsePartialPath; // 0x24
        char pad_25[0x3];
        UMercunaMoveToProxy* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_MercunaMoveToLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Pawn = (APawn*)Pawn;
    params.Destination = (FVector)Destination;
    params.EndDistance = (float)EndDistance;
    params.Speed = (float)Speed;
    params.UsePartialPath = (bool)UsePartialPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Destination = params.Destination;
    return (UMercunaMoveToProxy*)params.ReturnValue;
}
UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaMoveToProxy.MercunaMoveToActor"));
    struct Params_MercunaMoveToActor {
        UObject* WorldContextObject; // 0x0
        APawn* Pawn; // 0x8
        AActor* Actor; // 0x10
        float EndDistance; // 0x18
        float Speed; // 0x1c
        bool UsePartialPath; // 0x20
        char pad_21[0x7];
        UMercunaMoveToProxy* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_MercunaMoveToActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Pawn = (APawn*)Pawn;
    params.Actor = (AActor*)Actor;
    params.EndDistance = (float)EndDistance;
    params.Speed = (float)Speed;
    params.UsePartialPath = (bool)UsePartialPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMercunaMoveToProxy*)params.ReturnValue;
}
