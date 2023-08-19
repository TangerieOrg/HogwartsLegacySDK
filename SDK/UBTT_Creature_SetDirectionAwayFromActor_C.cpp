#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_Creature_SetDirectionAwayFromActor_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UBTT_Creature_SetDirectionAwayFromActor_C::ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FVector CallFunc_K2_GetActorLocation_ReturnValue, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Vector_Normal2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_SetDirectionAwayFromActor.BTT_Creature_SetDirectionAwayFromActor_C.ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor"));
    struct Params_ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x18
        char pad_24[0x4];
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
        char pad_31[0x7];
        UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue; // 0x38
        AActor* K2Node_DynamicCast_AsActor; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
        char pad_49[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x4c
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x58
        FVector CallFunc_Vector_Normal2D_ReturnValue; // 0x64
    }; // Size: 0x70
    Params_ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetBlackboardValueAsObject_ReturnValue = (UObject*)CallFunc_GetBlackboardValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Vector_Normal2D_ReturnValue = (FVector)CallFunc_Vector_Normal2D_ReturnValue;
    ProcessEvent(func, &params);
}
UBTT_Creature_SetDirectionAwayFromActor_C* UBTT_Creature_SetDirectionAwayFromActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_SetDirectionAwayFromActor.BTT_Creature_SetDirectionAwayFromActor_C");
    return (UBTT_Creature_SetDirectionAwayFromActor_C*)res;
}
void UBTT_Creature_SetDirectionAwayFromActor_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_SetDirectionAwayFromActor.BTT_Creature_SetDirectionAwayFromActor_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
