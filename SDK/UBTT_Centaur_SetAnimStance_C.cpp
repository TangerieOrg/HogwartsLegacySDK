#include "AAIController.hpp"
#include "ACreature_Character.hpp"
#include "APawn.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Centaur_SetAnimStance_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCentaurAnimInstance.hpp"
#include "UFunction.hpp"
UBTT_Centaur_SetAnimStance_C* UBTT_Centaur_SetAnimStance_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Tasks/BTT_Centaur_SetAnimStance.BTT_Centaur_SetAnimStance_C");
    return (UBTT_Centaur_SetAnimStance_C*)res;
}
void UBTT_Centaur_SetAnimStance_C::ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Tasks/BTT_Centaur_SetAnimStance.BTT_Centaur_SetAnimStance_C.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTT_Centaur_SetAnimStance_C::ExecuteUbergraph_BTT_Centaur_SetAnimStance(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UCentaurAnimInstance* K2Node_DynamicCast_AsCentaur_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/Centaur/BehaviorTree/Tasks/BTT_Centaur_SetAnimStance.BTT_Centaur_SetAnimStance_C.ExecuteUbergraph_BTT_Centaur_SetAnimStance"));
    struct Params_ExecuteUbergraph_BTT_Centaur_SetAnimStance {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AAIController* K2Node_Event_OwnerController; // 0x8
        APawn* K2Node_Event_ControlledPawn; // 0x10
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x28
        UCentaurAnimInstance* K2Node_DynamicCast_AsCentaur_Anim_Instance; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
    }; // Size: 0x39
    Params_ExecuteUbergraph_BTT_Centaur_SetAnimStance params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsCentaur_Anim_Instance = (UCentaurAnimInstance*)K2Node_DynamicCast_AsCentaur_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    ProcessEvent(func, &params);
}
