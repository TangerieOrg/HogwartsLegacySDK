#include "AAIController.hpp"
#include "APawn.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Creature_OpenPen_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UCreatureSpawnSlotComponent.hpp"
#include "UFunction.hpp"
#include "UIcarus3DMovementComponent.hpp"
#include "UObject.hpp"
UBTT_Creature_OpenPen_C* UBTT_Creature_OpenPen_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OpenPen.BTT_Creature_OpenPen_C");
    return (UBTT_Creature_OpenPen_C*)res;
}
void UBTT_Creature_OpenPen_C::SetMovementModeOnFinishExit(APawn* InPawn, APawn* Pawn, UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, UIcarus3DMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OpenPen.BTT_Creature_OpenPen_C.SetMovementModeOnFinishExit"));
    struct Params_SetMovementModeOnFinishExit {
        APawn* InPawn; // 0x0
        APawn* Pawn; // 0x8
        UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        UIcarus3DMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetMovementModeOnFinishExit params{};
    params.InPawn = (APawn*)InPawn;
    params.Pawn = (APawn*)Pawn;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCharacterMovementComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UIcarus3DMovementComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Creature_OpenPen_C::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OpenPen.BTT_Creature_OpenPen_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Creature_OpenPen_C::ExecuteUbergraph_BTT_Creature_OpenPen(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Tasks/BTT_Creature_OpenPen.BTT_Creature_OpenPen_C.ExecuteUbergraph_BTT_Creature_OpenPen"));
    struct Params_ExecuteUbergraph_BTT_Creature_OpenPen {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue; // 0x18
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_ExecuteUbergraph_BTT_Creature_OpenPen params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.CallFunc_GetBlackboard_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboard_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    ProcessEvent(func, &params);
}
