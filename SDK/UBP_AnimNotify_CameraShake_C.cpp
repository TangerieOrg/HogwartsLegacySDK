#include "FVector.hpp"
#include "UAnimNotify.hpp"
#include "UAnimSequenceBase.hpp"
#include "UBP_AnimNotify_CameraShake_C.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
UBP_AnimNotify_CameraShake_C* UBP_AnimNotify_CameraShake_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C");
    return (UBP_AnimNotify_CameraShake_C*)res;
}
bool UBP_AnimNotify_CameraShake_C::Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FVector CallFunc_K2_GetComponentLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify"));
    struct Params_Received_Notify {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        bool ReturnValue; // 0x10
        char pad_11[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x14
    }; // Size: 0x20
    Params_Received_Notify params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
