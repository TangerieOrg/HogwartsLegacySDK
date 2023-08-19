#pragma once
#include <cstdint>
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "FVector.hpp"
#include "UAITask.hpp"
class AAIController;
class AActor;
#pragma pack(push, 1)
class UMercunaTask_MoveTo : public UAITask {
public:
    char pad_70[0x70];
    static UMercunaTask_MoveTo* StaticClass();
    void OnMoveComplete(FAIRequestID RequestID, EMercunaMoveResult::Type Result);
    static UMercunaTask_MoveTo* MercunaMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
}; // Size: 0xe0
#pragma pack(pop)
