#pragma once
#include <cstdint>
#include "FIntervalCountdown.hpp"
#include "UBTTaskNode.hpp"
class AAIController;
class AActor;
class APawn;
#pragma pack(push, 1)
class UBTTask_BlueprintBase : public UBTTaskNode {
public:
    AAIController* AIOwner; // 0x70
    AActor* ActorOwner; // 0x78
    FIntervalCountdown TickInterval; // 0x80
    char pad_88[0x18];
    uint8_t bShowPropertyDetails : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x7];
    static UBTTask_BlueprintBase* StaticClass();
    void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);
    void SetFinishOnMessage(FName MessageName);
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveAbort(AActor* OwnerActor);
    bool IsTaskExecuting();
    bool IsTaskAborting();
    void FinishExecute(bool bSuccess);
    void FinishAbort();
}; // Size: 0xa8
#pragma pack(pop)
