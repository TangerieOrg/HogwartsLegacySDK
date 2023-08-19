#include "AActor.hpp"
#include "ABP_Protected_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_Protected_C* ABP_Protected_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Protego/BP_Protected.BP_Protected_C");
    return (ABP_Protected_C*)res;
}
void ABP_Protected_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Protego/BP_Protected.BP_Protected_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Protected_C::ExecuteUbergraph_BP_Protected(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Protego/BP_Protected.BP_Protected_C.ExecuteUbergraph_BP_Protected"));
    struct Params_ExecuteUbergraph_BP_Protected {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x8
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_BP_Protected params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
