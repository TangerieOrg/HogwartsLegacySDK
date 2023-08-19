#pragma once
#include <cstdint>
#include "EBTNodeResult\Type.hpp"
#include "UBTDecorator.hpp"
class AAIController;
class AActor;
class APawn;
#pragma pack(push, 1)
class UBTDecorator_BlueprintBase : public UBTDecorator {
public:
    AAIController* AIOwner; // 0x68
    AActor* ActorOwner; // 0x70
    TArray<FName> ObservedKeyNames; // 0x78
    char pad_88[0x10];
    uint8_t bShowPropertyDetails : 1; // 0x98
    uint8_t bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
    uint8_t bIsObservingBB : 1; // 0x98
    uint8_t pad_bitfield_98_3 : 5;
    char pad_99[0x7];
    static UBTDecorator_BlueprintBase* StaticClass();
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveObserverDeactivated(AActor* OwnerActor);
    void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveObserverActivated(AActor* OwnerActor);
    void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveExecutionStart(AActor* OwnerActor);
    void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, EBTNodeResult::Type NodeResult);
    void ReceiveExecutionFinish(AActor* OwnerActor, EBTNodeResult::Type NodeResult);
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
    bool PerformConditionCheck(AActor* OwnerActor);
    bool IsDecoratorObserverActive();
    bool IsDecoratorExecutionActive();
}; // Size: 0xa0
#pragma pack(pop)
