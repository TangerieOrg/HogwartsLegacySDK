#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTS_Creature_RemoveTagOnAbort_C.hpp"
#include "UBTService_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTS_Creature_RemoveTagOnAbort_C* UBTS_Creature_RemoveTagOnAbort_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_RemoveTagOnAbort.BTS_Creature_RemoveTagOnAbort_C");
    return (UBTS_Creature_RemoveTagOnAbort_C*)res;
}
void UBTS_Creature_RemoveTagOnAbort_C::ReceiveDeactivationAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_RemoveTagOnAbort.BTS_Creature_RemoveTagOnAbort_C.ReceiveDeactivationAI"));
    struct Params_ReceiveDeactivationAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveDeactivationAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTS_Creature_RemoveTagOnAbort_C::ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort(int32_t EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, bool CallFunc_RemoveActorTag_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_RemoveTagOnAbort.BTS_Creature_RemoveTagOnAbort_C.ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort"));
    struct Params_ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x8
        AAIController* K2Node_Event_OwnerController; // 0x10
        APawn* K2Node_Event_ControlledPawn; // 0x18
        bool CallFunc_RemoveActorTag_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_BTS_Creature_RemoveTagOnAbort params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_RemoveActorTag_ReturnValue = (bool)CallFunc_RemoveActorTag_ReturnValue;
    ProcessEvent(func, &params);
}
