#include "AActor.hpp"
#include "ABP_Clocktower_C.hpp"
#include "ASpellTool.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UObjectStateComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USendTargetComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
#include "USphereComponent.hpp"
ABP_Clocktower_C* ABP_Clocktower_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C");
    return (ABP_Clocktower_C*)res;
}
void ABP_Clocktower_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnAffectedBySpellEnd"));
    struct Params_OnAffectedBySpellEnd {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
    }; // Size: 0x40
    Params_OnAffectedBySpellEnd params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
}
bool ABP_Clocktower_C::DisallowArrestoMomentum() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowArrestoMomentum params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_Clocktower_C::StartFreeze(AActor* Instigator, float Amount) {}
void ABP_Clocktower_C::UserConstructionScript0(float Rate, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        float Rate; // 0x0
        float Scale; // 0x4
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.Rate = (float)Rate;
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnAffectedBySpell"));
    struct Params_OnAffectedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
        USpellToolRecord* SpellToolRecord; // 0x20
        FName SpellType; // 0x28
        FGameplayTagContainer Impact; // 0x30
        FHitResult Hit; // 0x50
        FVector ImpactDirection; // 0xd8
    }; // Size: 0xe4
    Params_OnAffectedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Clocktower_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnOverlappedBySpell"));
    struct Params_OnOverlappedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
        FVector MunitionLocation; // 0x40
    }; // Size: 0x4c
    Params_OnOverlappedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.MunitionLocation = (FVector)MunitionLocation;
    ProcessEvent(func, &params);
    MunitionLocation = params.MunitionLocation;
}
void ABP_Clocktower_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::Play_Whoosh() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.Play Whoosh"));
    struct Params_Play_Whoosh {
    }; // Size: 0x0
    Params_Play_Whoosh params{};
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnArrestoMomentumBegin"));
    struct Params_OnArrestoMomentumBegin {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_OnArrestoMomentumBegin params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_Clocktower_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Clocktower_C::Arresto__DelegateSignature(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.Arresto__DelegateSignature"));
    struct Params_Arresto__DelegateSignature {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_Arresto__DelegateSignature params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_Clocktower_C::ExecuteUbergraph_BP_Clocktower(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_Clocktower_C::ArrestoEnd__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.ArrestoEnd__DelegateSignature"));
    struct Params_ArrestoEnd__DelegateSignature {
    }; // Size: 0x0
    Params_ArrestoEnd__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Clocktower_C::Frozen__DelegateSignature(bool bFreeze, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clocktower.BP_Clocktower_C.Frozen__DelegateSignature"));
    struct Params_Frozen__DelegateSignature {
        bool bFreeze; // 0x0
        char pad_1[0x7];
        AActor* Instigator; // 0x8
    }; // Size: 0x10
    Params_Frozen__DelegateSignature params{};
    params.bFreeze = (bool)bFreeze;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
