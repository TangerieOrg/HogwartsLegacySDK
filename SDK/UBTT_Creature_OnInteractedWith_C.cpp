#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "ECreatureInteraction.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_OnInteractedWith_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCreatureManager.hpp"
#include "UFunction.hpp"
UBTT_Creature_OnInteractedWith_C* UBTT_Creature_OnInteractedWith_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OnInteractedWith.BTT_Creature_OnInteractedWith_C");
    return (UBTT_Creature_OnInteractedWith_C*)res;
}
void UBTT_Creature_OnInteractedWith_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OnInteractedWith.BTT_Creature_OnInteractedWith_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_OnInteractedWith_C::ExecuteUbergraph_BTT_Creature_OnInteractedWith(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FName CallFunc_GetDbId_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OnInteractedWith.BTT_Creature_OnInteractedWith_C.ExecuteUbergraph_BTT_Creature_OnInteractedWith"));
    struct Params_ExecuteUbergraph_BTT_Creature_OnInteractedWith {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x8
        AAIController* K2Node_Event_OwnerController; // 0x10
        APawn* K2Node_Event_ControlledPawn; // 0x18
        FName CallFunc_GetDbId_ReturnValue; // 0x20
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_ExecuteUbergraph_BTT_Creature_OnInteractedWith params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_GetDbId_ReturnValue = (FName)CallFunc_GetDbId_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
