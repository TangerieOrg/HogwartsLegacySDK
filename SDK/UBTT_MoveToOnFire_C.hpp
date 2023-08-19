#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class APawn;
class UEnemyAIComponent;
class AEnemy_Character;
class AAIController;
class UBlackboardComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_MoveToOnFire_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    APawn* Pawn; // 0xb0
    AAIController* Controller; // 0xb8
    FName LocationKeyName; // 0xc0
    ENPC_Mobility Mobility; // 0xc8
    bool OverrideMobility; // 0xc9
    char pad_ca[0x6];
    UEnemyAIComponent* EnemyComp; // 0xd0
    UBlackboardComponent* BBComp; // 0xd8
    bool MoveStarted; // 0xe0
    char pad_e1[0x3];
    FVector MoveLoc; // 0xe4
    float AtTargetDist; // 0xf0
    char pad_f4[0x4];
    static UBTT_MoveToOnFire_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_MoveToOnFire(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MoveToOnFire_ReturnValue);
}; // Size: 0xf8
#pragma pack(pop)
