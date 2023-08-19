#include "ETrailWidthMode.hpp"
#include "UAnimNotifyState.hpp"
#include "UAnimNotifyState_Trail.hpp"
#include "UAnimSequenceBase.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "USkeletalMeshComponent.hpp"
UAnimNotifyState_Trail* UAnimNotifyState_Trail::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotifyState_Trail");
    return (UAnimNotifyState_Trail*)res;
}
UParticleSystem* UAnimNotifyState_Trail::OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AnimNotifyState_Trail.OverridePSTemplate"));
    struct Params_OverridePSTemplate {
        USkeletalMeshComponent* MeshComp; // 0x0
        UAnimSequenceBase* Animation; // 0x8
        UParticleSystem* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_OverridePSTemplate params{};
    params.MeshComp = (USkeletalMeshComponent*)MeshComp;
    params.Animation = (UAnimSequenceBase*)Animation;
    ProcessEvent(func, &params);
    return (UParticleSystem*)params.ReturnValue;
}
