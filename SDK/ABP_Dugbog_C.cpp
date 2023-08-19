#include "AActor.hpp"
#include "ABP_Dugbog_C.hpp"
#include "ABP_Enemy_Character_C.hpp"
#include "ACharacter.hpp"
#include "ANPC_Character.hpp"
#include "ASpellTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EMovementMode.hpp"
#include "ENPC_Mobility.hpp"
#include "FDamageResult.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FOdcPathSpec.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAnimationComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USpellToolRecord.hpp"
void ABP_Dugbog_C::ReflectAttack(UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.ReflectAttack"));
    struct Params_ReflectAttack {
        UObject* Caller; // 0x0
        FDamageResult DamageResult; // 0x8
    }; // Size: 0x60
    Params_ReflectAttack params{};
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void ABP_Dugbog_C::Stealh_Attack_on(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.Stealh Attack on"));
    struct Params_Stealh_Attack_on {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Stealh_Attack_on params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ABP_Dugbog_C* ABP_Dugbog_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C");
    return (ABP_Dugbog_C*)res;
}
void ABP_Dugbog_C::AttackCollisionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.AttackCollisionStart"));
    struct Params_AttackCollisionStart {
    }; // Size: 0x0
    Params_AttackCollisionStart params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::Stealth_Attack_Off(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.Stealth Attack Off"));
    struct Params_Stealth_Attack_Off {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Stealth_Attack_Off params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
bool ABP_Dugbog_C::Damaged0(float DamageAmount, FVector HitLocation, FVector HitDirection, UPrimitiveComponent* PrimComp, FGameplayTagContainer MunitionTagContainer, AActor* Instigator, FVector Velocity, bool CallFunc_Damaged_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsStationary_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.Damaged"));
    struct Params_Damaged {
        float DamageAmount; // 0x0
        FVector HitLocation; // 0x4
        FVector HitDirection; // 0x10
        char pad_1c[0x4];
        UPrimitiveComponent* PrimComp; // 0x20
        FGameplayTagContainer MunitionTagContainer; // 0x28
        AActor* Instigator; // 0x48
        FVector Velocity; // 0x50
        bool ReturnValue; // 0x5c
        bool CallFunc_Damaged_ReturnValue; // 0x5d
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x5e
        char pad_5f[0x1];
        FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue; // 0x60
        bool CallFunc_IsStationary_ReturnValue; // 0x68
        bool CallFunc_BooleanAND_ReturnValue; // 0x69
    }; // Size: 0x6a
    Params_Damaged params{};
    params.DamageAmount = (float)DamageAmount;
    params.HitLocation = (FVector)HitLocation;
    params.HitDirection = (FVector)HitDirection;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Instigator = (AActor*)Instigator;
    params.Velocity = (FVector)Velocity;
    params.CallFunc_Damaged_ReturnValue = (bool)CallFunc_Damaged_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_MakeLiteralGameplayTag_ReturnValue = (FGameplayTag)CallFunc_MakeLiteralGameplayTag_ReturnValue;
    params.CallFunc_IsStationary_ReturnValue = (bool)CallFunc_IsStationary_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Dugbog_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::Hit_Actor(FHitResult HitResult, AActor* HitActor) {}
void ABP_Dugbog_C::MovementModeChangedDelegate_Event_0(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.MovementModeChangedDelegate_Event_0"));
    struct Params_MovementModeChangedDelegate_Event_0 {
        ACharacter* Character; // 0x0
        EMovementMode PrevMovementMode; // 0x8
        uint8_t PreviousCustomMode; // 0x9
    }; // Size: 0xa
    Params_MovementModeChangedDelegate_Event_0 params{};
    params.Character = (ACharacter*)Character;
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::SetWaterPathSpec() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.SetWaterPathSpec"));
    struct Params_SetWaterPathSpec {
    }; // Size: 0x0
    Params_SetWaterPathSpec params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::MinorHitLoaded(UObject* LoadedObject) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.MinorHitLoaded"));
    struct Params_MinorHitLoaded {
        UObject* LoadedObject; // 0x0
    }; // Size: 0x8
    Params_MinorHitLoaded params{};
    params.LoadedObject = (UObject*)LoadedObject;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::SetGroundPathSpec() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.SetGroundPathSpec"));
    struct Params_SetGroundPathSpec {
    }; // Size: 0x0
    Params_SetGroundPathSpec params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::SetDefaultPathSpec() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.SetDefaultPathSpec"));
    struct Params_SetDefaultPathSpec {
    }; // Size: 0x0
    Params_SetDefaultPathSpec params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::AttackCollisionStop() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.AttackCollisionStop"));
    struct Params_AttackCollisionStop {
    }; // Size: 0x0
    Params_AttackCollisionStop params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::BndEvt__Attack_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.BndEvt__Attack_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Attack_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Attack_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Dugbog_C::BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature(AActor* pActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature"));
    struct Params_BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature {
        AActor* pActor; // 0x0
    }; // Size: 0x8
    Params_BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_1_OnDeadDelegate__DelegateSignature params{};
    params.pActor = (AActor*)pActor;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature"));
    struct Params_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature {
        UPrimitiveComponent* HitComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature params{};
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ABP_Dugbog_C::BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_2_NPCMobilityChanged__DelegateSignature(ENPC_Mobility Mobility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_2_NPCMobilityChanged__DelegateSignature"));
    struct Params_BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_2_NPCMobilityChanged__DelegateSignature {
        ENPC_Mobility Mobility; // 0x0
    }; // Size: 0x1
    Params_BndEvt__BP_EnemyAI_K2Node_ComponentBoundEvent_2_NPCMobilityChanged__DelegateSignature params{};
    params.Mobility = (ENPC_Mobility)Mobility;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::HitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult Hit, FVector ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.HitBySpell"));
    struct Params_HitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_HitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::NewDeathFade0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.NewDeathFade"));
    struct Params_NewDeathFade {
    }; // Size: 0x0
    Params_NewDeathFade params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::DamageTaken(UObject* Caller, FDamageResult& DamageResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.DamageTaken"));
    struct Params_DamageTaken {
        UObject* Caller; // 0x0
        FDamageResult DamageResult; // 0x8
    }; // Size: 0x60
    Params_DamageTaken params{};
    params.Caller = (UObject*)Caller;
    params.DamageResult = (FDamageResult)DamageResult;
    ProcessEvent(func, &params);
    DamageResult = params.DamageResult;
}
void ABP_Dugbog_C::BndEvt__BP_Dugbog_BP_EnemyAI_K2Node_ComponentBoundEvent_3_AttackBeginDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.BndEvt__BP_Dugbog_BP_EnemyAI_K2Node_ComponentBoundEvent_3_AttackBeginDelegate__DelegateSignature"));
    struct Params_BndEvt__BP_Dugbog_BP_EnemyAI_K2Node_ComponentBoundEvent_3_AttackBeginDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__BP_Dugbog_BP_EnemyAI_K2Node_ComponentBoundEvent_3_AttackBeginDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::CombatAggroPlayer(ANPC_Character* NPCChar) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.CombatAggroPlayer"));
    struct Params_CombatAggroPlayer {
        ANPC_Character* NPCChar; // 0x0
    }; // Size: 0x8
    Params_CombatAggroPlayer params{};
    params.NPCChar = (ANPC_Character*)NPCChar;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::MajorHitLoaded(UObject* LoadedObject) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog.BP_Dugbog_C.MajorHitLoaded"));
    struct Params_MajorHitLoaded {
        UObject* LoadedObject; // 0x0
    }; // Size: 0x8
    Params_MajorHitLoaded params{};
    params.LoadedObject = (UObject*)LoadedObject;
    ProcessEvent(func, &params);
}
void ABP_Dugbog_C::ExecuteUbergraph_BP_Dugbog(int32_t EntryPoint, FMaterialSwapParameters Temp_struct_Variable) {}
