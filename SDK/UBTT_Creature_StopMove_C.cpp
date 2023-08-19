#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_StopMove_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UPawnMovementComponent.hpp"
UBTT_Creature_StopMove_C* UBTT_Creature_StopMove_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_StopMove.BTT_Creature_StopMove_C");
    return (UBTT_Creature_StopMove_C*)res;
}
void UBTT_Creature_StopMove_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_StopMove.BTT_Creature_StopMove_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Creature_StopMove_C::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_StopMove.BTT_Creature_StopMove_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_StopMove_C::ExecuteUbergraph_BTT_Creature_StopMove(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, AActor* K2Node_Event_OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_StopMove.BTT_Creature_StopMove_C.ExecuteUbergraph_BTT_Creature_StopMove"));
    struct Params_ExecuteUbergraph_BTT_Creature_StopMove {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue; // 0x18
        AActor* K2Node_Event_OwnerActor; // 0x20
    }; // Size: 0x28
    Params_ExecuteUbergraph_BTT_Creature_StopMove params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_GetMovementComponent_ReturnValue = (UPawnMovementComponent*)CallFunc_GetMovementComponent_ReturnValue;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    ProcessEvent(func, &params);
}
