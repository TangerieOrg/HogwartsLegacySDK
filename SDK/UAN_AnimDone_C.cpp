#include "EEnemyAIAnimState.hpp"
#include "UAN_AnimDone_C.hpp"
#include "UAnimInstance.hpp"
#include "UAnimNotify.hpp"
#include "UAnimSequenceBase.hpp"
#include "UEnemy_AnimInstance.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
UAN_AnimDone_C* UAN_AnimDone_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/AnimNotify/AN_AnimDone.AN_AnimDone_C");
    return (UAN_AnimDone_C*)res;
}
bool UAN_AnimDone_C::Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UEnemy_AnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/AnimNotify/AN_AnimDone.AN_AnimDone_C.Received_Notify"));
    struct Params_Received_Notify {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x7];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x18
        UEnemy_AnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
    }; // Size: 0x29
    Params_Received_Notify params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsEnemy_Anim_Instance = (UEnemy_AnimInstance*)K2Node_DynamicCast_AsEnemy_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
