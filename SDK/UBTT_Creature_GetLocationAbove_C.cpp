#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_Creature_GetLocationAbove_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTT_Creature_GetLocationAbove_C* UBTT_Creature_GetLocationAbove_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C");
    return (UBTT_Creature_GetLocationAbove_C*)res;
}
void UBTT_Creature_GetLocationAbove_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Creature_GetLocationAbove_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_GetLocationAbove_C::ExecuteUbergraph_BTT_Creature_GetLocationAbove(int32_t EntryPoint, FVector CallFunc_MakeVector_ReturnValue, AActor* K2Node_Event_OwnerActor, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_GetLocationAbove.BTT_Creature_GetLocationAbove_C.ExecuteUbergraph_BTT_Creature_GetLocationAbove"));
    struct Params_ExecuteUbergraph_BTT_Creature_GetLocationAbove {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_MakeVector_ReturnValue; // 0x4
        AActor* K2Node_Event_OwnerActor; // 0x10
        AAIController* K2Node_Event_OwnerController; // 0x18
        APawn* K2Node_Event_ControlledPawn; // 0x20
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x28
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x34
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x40
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x4c
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x58
    }; // Size: 0x64
    Params_ExecuteUbergraph_BTT_Creature_GetLocationAbove params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    ProcessEvent(func, &params);
}
