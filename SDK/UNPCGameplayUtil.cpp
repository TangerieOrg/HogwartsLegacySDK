#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNPCGameplayUtil.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
UNPCGameplayUtil* UNPCGameplayUtil::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPCGameplayUtil");
    return (UNPCGameplayUtil*)res;
}
void UNPCGameplayUtil::SetLinearDampeningAcrossPhysicsBodies(USkeletalMeshComponent* SkeletalMeshComp, float LinearDampening) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPCGameplayUtil.SetLinearDampeningAcrossPhysicsBodies"));
    struct Params_SetLinearDampeningAcrossPhysicsBodies {
        USkeletalMeshComponent* SkeletalMeshComp; // 0x0
        float LinearDampening; // 0x8
    }; // Size: 0xc
    Params_SetLinearDampeningAcrossPhysicsBodies params{};
    params.SkeletalMeshComp = (USkeletalMeshComponent*)SkeletalMeshComp;
    params.LinearDampening = (float)LinearDampening;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNPCGameplayUtil::AddImpulseSpread(USkeletalMeshComponent* SkeletalMeshComp, FVector Velocity, bool bVelocityChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPCGameplayUtil.AddImpulseSpread"));
    struct Params_AddImpulseSpread {
        USkeletalMeshComponent* SkeletalMeshComp; // 0x0
        FVector Velocity; // 0x8
        bool bVelocityChange; // 0x14
    }; // Size: 0x15
    Params_AddImpulseSpread params{};
    params.SkeletalMeshComp = (USkeletalMeshComponent*)SkeletalMeshComp;
    params.Velocity = (FVector)Velocity;
    params.bVelocityChange = (bool)bVelocityChange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
