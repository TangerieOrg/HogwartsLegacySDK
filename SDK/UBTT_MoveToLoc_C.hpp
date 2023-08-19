#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class AActor;
class ANPC_Character;
class UEnemyAIComponent;
class UBlackboardComponent;
#pragma pack(push, 1)
class UBTT_MoveToLoc_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    AAIController* Controller; // 0xb0
    FName LocationKeyName; // 0xb8
    ENPC_Mobility Mobility; // 0xc0
    bool FaceDirection; // 0xc1
    char pad_c2[0x2];
    float Interpollation; // 0xc4
    bool OverrideMobility; // 0xc8
    char pad_c9[0x3];
    float TimeoutMin; // 0xcc
    float TimeoutMax; // 0xd0
    char pad_d4[0x4];
    static UBTT_MoveToLoc_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_MoveToLoc(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetMyLoc_ReturnValue, bool CallFunc_NeedsStayInVolumeConstrain_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_1, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_2, FVector CallFunc_GetValueAsVector_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue_1, bool CallFunc_MoveToLocation_ReturnValue, bool CallFunc_NeedsStayInVolumeConstrain_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_InitMoveToLocation_ReturnValue);
}; // Size: 0xd8
#pragma pack(pop)
