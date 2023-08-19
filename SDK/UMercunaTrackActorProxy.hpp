#pragma once
#include <cstdint>
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class APawn;
class AActor;
#pragma pack(push, 1)
class UMercunaTrackActorProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x38];
    static UMercunaTrackActorProxy* StaticClass();
    void OnMoveComplete(FAIRequestID RequestID, EMercunaMoveResult::Type Result);
    static UMercunaTrackActorProxy* MercunaTrackActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float Distance, float Speed);
}; // Size: 0x68
#pragma pack(pop)
