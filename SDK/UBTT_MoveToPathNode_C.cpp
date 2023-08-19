#include "AAIController.hpp"
#include "AActor.hpp"
#include "APathNode.hpp"
#include "EPathFollowingStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_MoveToPathNode_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
void UBTT_MoveToPathNode_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToPathNode.BTT_MoveToPathNode_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_MoveToPathNode_C::Arrived(APathNode* pPathNode, AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToPathNode.BTT_MoveToPathNode_C.Arrived"));
    struct Params_Arrived {
        APathNode* pPathNode; // 0x0
        AActor* pActor; // 0x8
    }; // Size: 0x10
    Params_Arrived params{};
    params.pPathNode = (APathNode*)pPathNode;
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
UBTT_MoveToPathNode_C* UBTT_MoveToPathNode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToPathNode.BTT_MoveToPathNode_C");
    return (UBTT_MoveToPathNode_C*)res;
}
void UBTT_MoveToPathNode_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/Mobility/BTT_MoveToPathNode.BTT_MoveToPathNode_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_MoveToPathNode_C::ExecuteUbergraph_BTT_MoveToPathNode(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, APathNode* K2Node_CustomEvent_pPathNode, AActor* K2Node_CustomEvent_pActor, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_1, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_2, APathNode* CallFunc_GetPathNode_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetComponentByClass_ReturnValue_3, EPathFollowingStatus::Type CallFunc_GetMoveStatus_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
