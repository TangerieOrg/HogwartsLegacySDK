#pragma once
#include <cstdint>
#include "UBTService.hpp"
class AAIController;
class AActor;
class APawn;
#pragma pack(push, 1)
class UBTService_BlueprintBase : public UBTService {
public:
    AAIController* AIOwner; // 0x70
    AActor* ActorOwner; // 0x78
    char pad_80[0x10];
    uint8_t bShowPropertyDetails : 1; // 0x90
    uint8_t bShowEventDetails : 1; // 0x90
    uint8_t pad_bitfield_90_2 : 6;
    char pad_91[0x7];
    static UBTService_BlueprintBase* StaticClass();
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveSearchStart(AActor* OwnerActor);
    void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveDeactivation(AActor* OwnerActor);
    void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveActivation(AActor* OwnerActor);
    bool IsServiceActive();
}; // Size: 0x98
#pragma pack(pop)
