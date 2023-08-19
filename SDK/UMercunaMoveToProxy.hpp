#pragma once
#include <cstdint>
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class APawn;
class AActor;
#pragma pack(push, 1)
class UMercunaMoveToProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x70];
    static UMercunaMoveToProxy* StaticClass();
    void OnMoveComplete(FAIRequestID RequestID, EMercunaMoveResult::Type Result);
    static UMercunaMoveToProxy* MercunaMoveToLocations(UObject* WorldContextObject, APawn*& Pawn, TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath);
    static UMercunaMoveToProxy* MercunaMoveToLocation(UObject* WorldContextObject, APawn* Pawn, FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    static UMercunaMoveToProxy* MercunaMoveToActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
}; // Size: 0xa0
#pragma pack(pop)
