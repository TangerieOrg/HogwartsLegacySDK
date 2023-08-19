#include "AActor.hpp"
#include "AMunitionType_Base.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMunitionImpactData.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
void AMunitionType_Base::SetTarget(AActor* i_pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetTarget"));
    struct Params_SetTarget {
        AActor* i_pActor; // 0x0
    }; // Size: 0x8
    Params_SetTarget params{};
    params.i_pActor = (AActor*)i_pActor;
    ProcessEvent(func, &params);
}
float AMunitionType_Base::GetRemainingLifeTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetRemainingLifeTime"));
    struct Params_GetRemainingLifeTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRemainingLifeTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AMunitionType_Base* AMunitionType_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionType_Base");
    return (AMunitionType_Base*)res;
}
void AMunitionType_Base::SetLifeTime(float InMaxTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetLifeTime"));
    struct Params_SetLifeTime {
        float InMaxTime; // 0x0
    }; // Size: 0x4
    Params_SetLifeTime params{};
    params.InMaxTime = (float)InMaxTime;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetRemainingLifeTime(float InRemaningTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetRemainingLifeTime"));
    struct Params_SetRemainingLifeTime {
        float InRemaningTime; // 0x0
    }; // Size: 0x4
    Params_SetRemainingLifeTime params{};
    params.InRemaningTime = (float)InRemaningTime;
    ProcessEvent(func, &params);
}
bool AMunitionType_Base::GetVelocityIncludeTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetVelocityIncludeTarget"));
    struct Params_GetVelocityIncludeTarget {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetVelocityIncludeTarget params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMunitionType_Base::TargetDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.TargetDestroyed"));
    struct Params_TargetDestroyed {
    }; // Size: 0x0
    Params_TargetDestroyed params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetStartingVelocity(FVector InVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetStartingVelocity"));
    struct Params_SetStartingVelocity {
        FVector InVelocity; // 0x0
    }; // Size: 0xc
    Params_SetStartingVelocity params{};
    params.InVelocity = (FVector)InVelocity;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetVelocityIncludeTarget(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetVelocityIncludeTarget"));
    struct Params_SetVelocityIncludeTarget {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetVelocityIncludeTarget params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetSourcePosition(FVector i_sourcePos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetSourcePosition"));
    struct Params_SetSourcePosition {
        FVector i_sourcePos; // 0x0
    }; // Size: 0xc
    Params_SetSourcePosition params{};
    params.i_sourcePos = (FVector)i_sourcePos;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetRecomputeVelocity(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetRecomputeVelocity"));
    struct Params_SetRecomputeVelocity {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetRecomputeVelocity params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetMunitionOwner(AActor* i_pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetMunitionOwner"));
    struct Params_SetMunitionOwner {
        AActor* i_pActor; // 0x0
    }; // Size: 0x8
    Params_SetMunitionOwner params{};
    params.i_pActor = (AActor*)i_pActor;
    ProcessEvent(func, &params);
}
AActor* AMunitionType_Base::GetMunitionOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetMunitionOwner"));
    struct Params_GetMunitionOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMunitionOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void AMunitionType_Base::SetMunitionImpactType(FName InMunitionImpactType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetMunitionImpactType"));
    struct Params_SetMunitionImpactType {
        FName InMunitionImpactType; // 0x0
    }; // Size: 0x8
    Params_SetMunitionImpactType params{};
    params.InMunitionImpactType = (FName)InMunitionImpactType;
    ProcessEvent(func, &params);
}
bool AMunitionType_Base::GetFromAimMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetFromAimMode"));
    struct Params_GetFromAimMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFromAimMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMunitionType_Base::SetMunitionDataAssets(TArray<UInteractionArchitectAsset*>& InMunitionDataAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetMunitionDataAssets"));
    struct Params_SetMunitionDataAssets {
        TArray<UInteractionArchitectAsset*> InMunitionDataAssets; // 0x0
    }; // Size: 0x10
    Params_SetMunitionDataAssets params{};
    params.InMunitionDataAssets = (TArray<UInteractionArchitectAsset*>)InMunitionDataAssets;
    ProcessEvent(func, &params);
    InMunitionDataAssets = params.InMunitionDataAssets;
}
void AMunitionType_Base::MunitionFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.MunitionFailed"));
    struct Params_MunitionFailed {
    }; // Size: 0x0
    Params_MunitionFailed params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetMaxRange(float Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetMaxRange"));
    struct Params_SetMaxRange {
        float Range; // 0x0
    }; // Size: 0x4
    Params_SetMaxRange params{};
    params.Range = (float)Range;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetMaxDamage(float InMaxDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetMaxDamage"));
    struct Params_SetMaxDamage {
        float InMaxDamage; // 0x0
    }; // Size: 0x4
    Params_SetMaxDamage params{};
    params.InMaxDamage = (float)InMaxDamage;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::AddMunitionDataAsset(UInteractionArchitectAsset* InMunitionDataAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.AddMunitionDataAsset"));
    struct Params_AddMunitionDataAsset {
        UInteractionArchitectAsset* InMunitionDataAsset; // 0x0
    }; // Size: 0x8
    Params_AddMunitionDataAsset params{};
    params.InMunitionDataAsset = (UInteractionArchitectAsset*)InMunitionDataAsset;
    ProcessEvent(func, &params);
}
bool AMunitionType_Base::GetRecomputeVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetRecomputeVelocity"));
    struct Params_GetRecomputeVelocity {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetRecomputeVelocity params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMunitionType_Base::SetInstigator(AActor* i_pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetInstigator"));
    struct Params_SetInstigator {
        AActor* i_pActor; // 0x0
    }; // Size: 0x8
    Params_SetInstigator params{};
    params.i_pActor = (AActor*)i_pActor;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::ResetMunitionTagContainer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.ResetMunitionTagContainer"));
    struct Params_ResetMunitionTagContainer {
    }; // Size: 0x0
    Params_ResetMunitionTagContainer params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetFromAimMode(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetFromAimMode"));
    struct Params_SetFromAimMode {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetFromAimMode params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::RemoveMunitionTag(FGameplayTag& InMunitionTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.RemoveMunitionTag"));
    struct Params_RemoveMunitionTag {
        FGameplayTag InMunitionTag; // 0x0
    }; // Size: 0x8
    Params_RemoveMunitionTag params{};
    params.InMunitionTag = (FGameplayTag)InMunitionTag;
    ProcessEvent(func, &params);
    InMunitionTag = params.InMunitionTag;
}
void AMunitionType_Base::SetDestinationPosition(FVector i_destPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetDestinationPosition"));
    struct Params_SetDestinationPosition {
        FVector i_destPos; // 0x0
    }; // Size: 0xc
    Params_SetDestinationPosition params{};
    params.i_destPos = (FVector)i_destPos;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::SetDamage(float InDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.SetDamage"));
    struct Params_SetDamage {
        float InDamage; // 0x0
    }; // Size: 0x4
    Params_SetDamage params{};
    params.InDamage = (float)InDamage;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::ResetMunitionDataAssets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.ResetMunitionDataAssets"));
    struct Params_ResetMunitionDataAssets {
    }; // Size: 0x0
    Params_ResetMunitionDataAssets params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Base::RemoveMunitionTagContainer(FGameplayTagContainer& InMunitionTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.RemoveMunitionTagContainer"));
    struct Params_RemoveMunitionTagContainer {
        FGameplayTagContainer InMunitionTagContainer; // 0x0
    }; // Size: 0x20
    Params_RemoveMunitionTagContainer params{};
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    ProcessEvent(func, &params);
    InMunitionTagContainer = params.InMunitionTagContainer;
}
void AMunitionType_Base::RemoveMunitionDataAsset(UInteractionArchitectAsset* InMunitionDataAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.RemoveMunitionDataAsset"));
    struct Params_RemoveMunitionDataAsset {
        UInteractionArchitectAsset* InMunitionDataAsset; // 0x0
    }; // Size: 0x8
    Params_RemoveMunitionDataAsset params{};
    params.InMunitionDataAsset = (UInteractionArchitectAsset*)InMunitionDataAsset;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::MunitionDOA() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.MunitionDOA"));
    struct Params_MunitionDOA {
    }; // Size: 0x0
    Params_MunitionDOA params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Base::OnOverlap__DelegateSignature(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionType_Base.OnOverlap__DelegateSignature"));
    struct Params_OnOverlap__DelegateSignature {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnOverlap__DelegateSignature params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
bool AMunitionType_Base::IsDeflectedMunition_K2() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.IsDeflectedMunition_K2"));
    struct Params_IsDeflectedMunition_K2 {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDeflectedMunition_K2 params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMunitionType_Base::OnImpactDamage__DelegateSignature(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionType_Base.OnImpactDamage__DelegateSignature"));
    struct Params_OnImpactDamage__DelegateSignature {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnImpactDamage__DelegateSignature params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
float AMunitionType_Base::GetDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetDamage"));
    struct Params_GetDamage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDamage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AMunitionType_Base::OnImpact__DelegateSignature(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionType_Base.OnImpact__DelegateSignature"));
    struct Params_OnImpact__DelegateSignature {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnImpact__DelegateSignature params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void AMunitionType_Base::OnDestroyed__DelegateSignature(AMunitionType_Base* MunitionInstance) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionType_Base.OnDestroyed__DelegateSignature"));
    struct Params_OnDestroyed__DelegateSignature {
        AMunitionType_Base* MunitionInstance; // 0x0
    }; // Size: 0x8
    Params_OnDestroyed__DelegateSignature params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    ProcessEvent(func, &params);
}
void AMunitionType_Base::MunitionIgnored() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.MunitionIgnored"));
    struct Params_MunitionIgnored {
    }; // Size: 0x0
    Params_MunitionIgnored params{};
    ProcessEvent(func, &params);
}
void AMunitionType_Base::MunitionDeflected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.MunitionDeflected"));
    struct Params_MunitionDeflected {
    }; // Size: 0x0
    Params_MunitionDeflected params{};
    ProcessEvent(func, &params);
}
FVector AMunitionType_Base::ComputeVelocity(FVector i_sourcePos, FVector i_destPos, FVector i_destVel, float i_speed, float i_gravity, float& o_time, bool assertOnError) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.ComputeVelocity"));
    struct Params_ComputeVelocity {
        FVector i_sourcePos; // 0x0
        FVector i_destPos; // 0xc
        FVector i_destVel; // 0x18
        float i_speed; // 0x24
        float i_gravity; // 0x28
        float o_time; // 0x2c
        bool assertOnError; // 0x30
        char pad_31[0x3];
        FVector ReturnValue; // 0x34
    }; // Size: 0x40
    Params_ComputeVelocity params{};
    params.i_sourcePos = (FVector)i_sourcePos;
    params.i_destPos = (FVector)i_destPos;
    params.i_destVel = (FVector)i_destVel;
    params.i_speed = (float)i_speed;
    params.i_gravity = (float)i_gravity;
    params.o_time = (float)o_time;
    params.assertOnError = (bool)assertOnError;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_time = params.o_time;
    return (FVector)params.ReturnValue;
}
void AMunitionType_Base::MunitionBlocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.MunitionBlocked"));
    struct Params_MunitionBlocked {
    }; // Size: 0x0
    Params_MunitionBlocked params{};
    ProcessEvent(func, &params);
}
bool AMunitionType_Base::K2_WasMunitionDeflected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.K2_WasMunitionDeflected"));
    struct Params_K2_WasMunitionDeflected {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_K2_WasMunitionDeflected params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMunitionType_Base::IgnoreActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.IgnoreActor"));
    struct Params_IgnoreActor {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_IgnoreActor params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
AActor* AMunitionType_Base::GetTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetTarget"));
    struct Params_GetTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FVector AMunitionType_Base::GetStartingVelocity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetStartingVelocity"));
    struct Params_GetStartingVelocity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetStartingVelocity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector AMunitionType_Base::GetSourcePosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetSourcePosition"));
    struct Params_GetSourcePosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSourcePosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FGameplayTagContainer AMunitionType_Base::GetMunitionTagContainer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetMunitionTagContainer"));
    struct Params_GetMunitionTagContainer {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetMunitionTagContainer params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
FVector AMunitionType_Base::ComputeVelocity_NoGravity(FVector i_sourcePos, FVector i_destPos, FVector i_destVel, float i_speed, float& o_time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.ComputeVelocity_NoGravity"));
    struct Params_ComputeVelocity_NoGravity {
        FVector i_sourcePos; // 0x0
        FVector i_destPos; // 0xc
        FVector i_destVel; // 0x18
        float i_speed; // 0x24
        float o_time; // 0x28
        FVector ReturnValue; // 0x2c
    }; // Size: 0x38
    Params_ComputeVelocity_NoGravity params{};
    params.i_sourcePos = (FVector)i_sourcePos;
    params.i_destPos = (FVector)i_destPos;
    params.i_destVel = (FVector)i_destVel;
    params.i_speed = (float)i_speed;
    params.o_time = (float)o_time;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_time = params.o_time;
    return (FVector)params.ReturnValue;
}
FName AMunitionType_Base::GetMunitionImpactType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetMunitionImpactType"));
    struct Params_GetMunitionImpactType {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMunitionImpactType params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<UInteractionArchitectAsset*> AMunitionType_Base::GetMunitionDataAssets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetMunitionDataAssets"));
    struct Params_GetMunitionDataAssets {
        TArray<UInteractionArchitectAsset*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMunitionDataAssets params{};
    ProcessEvent(func, &params);
    return (TArray<UInteractionArchitectAsset*>)params.ReturnValue;
}
void AMunitionType_Base::Fire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.Fire"));
    struct Params_Fire {
    }; // Size: 0x0
    Params_Fire params{};
    ProcessEvent(func, &params);
}
float AMunitionType_Base::GetMaxRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetMaxRange"));
    struct Params_GetMaxRange {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxRange params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float AMunitionType_Base::GetMaxDamage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetMaxDamage"));
    struct Params_GetMaxDamage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxDamage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector AMunitionType_Base::GetDestinationPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.GetDestinationPosition"));
    struct Params_GetDestinationPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetDestinationPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void AMunitionType_Base::AddMunitionTagContainer(FGameplayTagContainer& InMunitionTagContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.AddMunitionTagContainer"));
    struct Params_AddMunitionTagContainer {
        FGameplayTagContainer InMunitionTagContainer; // 0x0
    }; // Size: 0x20
    Params_AddMunitionTagContainer params{};
    params.InMunitionTagContainer = (FGameplayTagContainer)InMunitionTagContainer;
    ProcessEvent(func, &params);
    InMunitionTagContainer = params.InMunitionTagContainer;
}
void AMunitionType_Base::AddMunitionTag(FGameplayTag& InMunitionTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionType_Base.AddMunitionTag"));
    struct Params_AddMunitionTag {
        FGameplayTag InMunitionTag; // 0x0
    }; // Size: 0x8
    Params_AddMunitionTag params{};
    params.InMunitionTag = (FGameplayTag)InMunitionTag;
    ProcessEvent(func, &params);
    InMunitionTag = params.InMunitionTag;
}
