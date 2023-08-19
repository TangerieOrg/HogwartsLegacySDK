#pragma once
#include <cstdint>
#include "EPathFollowingStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class APathNode;
class AActor;
class UBlackboardComponent;
class UEnemyAIComponent;
class AAIController;
#pragma pack(push, 1)
class UBTT_MoveToPathNode_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float MaxTime; // 0xb0
    float ElapsedTime; // 0xb4
    FName PathNodeLocKeyName; // 0xb8
    FName PathNodeRadiusKeyName; // 0xc0
    static UBTT_MoveToPathNode_C* StaticClass();
    void Arrived(APathNode* pPathNode, AActor* pActor);
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_MoveToPathNode(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, APathNode* K2Node_CustomEvent_pPathNode, AActor* K2Node_CustomEvent_pActor, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_2, APathNode* CallFunc_GetPathNode_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_3, EPathFollowingStatus::Type CallFunc_GetMoveStatus_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue);
}; // Size: 0xc8
#pragma pack(pop)
