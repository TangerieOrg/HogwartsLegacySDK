#include "AActor.hpp"
#include "ABP_WingardiumSpell_C.hpp"
#include "ACharacter.hpp"
#include "APawn.hpp"
#include "AWingardiumBulletTimeSpellTool.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInputComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_WingardiumSpell_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
ABP_WingardiumSpell_C* ABP_WingardiumSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C");
    return (ABP_WingardiumSpell_C*)res;
}
void ABP_WingardiumSpell_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::BeamFadeOut0(UParticleSystemComponent* BeamEmitter) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.BeamFadeOut"));
    struct Params_BeamFadeOut {
        UParticleSystemComponent* BeamEmitter; // 0x0
    }; // Size: 0x8
    Params_BeamFadeOut params{};
    params.BeamEmitter = (UParticleSystemComponent*)BeamEmitter;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_15"));
    struct Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_15 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_15 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_14"));
    struct Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_14 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_14 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::VFX_LassoBeam_Spawn() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.VFX_LassoBeam_Spawn"));
    struct Params_VFX_LassoBeam_Spawn {
    }; // Size: 0x0
    Params_VFX_LassoBeam_Spawn params{};
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_13"));
    struct Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_13 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_13 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_11"));
    struct Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_11 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_11 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_12"));
    struct Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_12 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateLeft_K2Node_CustomInputActionEvent_12 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_7"));
    struct Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_7 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_7 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_10"));
    struct Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_10 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_10 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_9"));
    struct Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_9 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_9 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_8"));
    struct Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_8 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumRotateRight_K2Node_CustomInputActionEvent_8 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_6"));
    struct Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_6 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_6 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_5"));
    struct Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_5 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_5 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_4"));
    struct Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_4 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumFurther_K2Node_CustomInputActionEvent_4 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::FadeBeamIn(UParticleSystemComponent* Beam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.FadeBeamIn"));
    struct Params_FadeBeamIn {
        UParticleSystemComponent* Beam; // 0x0
    }; // Size: 0x8
    Params_FadeBeamIn params{};
    params.Beam = (UParticleSystemComponent*)Beam;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_3"));
    struct Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_3 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_3 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_2"));
    struct Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::VFX_LassoBeam_Update(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.VFX_LassoBeam_Update"));
    struct Params_VFX_LassoBeam_Update {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_VFX_LassoBeam_Update params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_1"));
    struct Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::OnStop() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.OnStop"));
    struct Params_OnStop {
    }; // Size: 0x0
    Params_OnStop params{};
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.OnAffectTarget"));
    struct Params_OnAffectTarget {
        AActor* Target; // 0x0
        USceneComponent* Component; // 0x8
        bool bInTargetAffected; // 0x10
    }; // Size: 0x11
    Params_OnAffectTarget params{};
    params.Target = (AActor*)Target;
    params.Component = (USceneComponent*)Component;
    params.bInTargetAffected = (bool)bInTargetAffected;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_WingardiumNearer_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::OnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.OnStart"));
    struct Params_OnStart {
    }; // Size: 0x0
    Params_OnStart params{};
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::ExecuteUbergraph_BP_WingardiumSpell(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_15, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_14, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_13, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_12, FVariantMapHandle Temp_struct_Variable, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_11, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_10, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_9, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_8, FVariantMapHandle Temp_struct_Variable_1, FNiagaraSystemSpawnAttachedPointInfo K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_7, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_6, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_5, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_4, FVariantMapHandle Temp_struct_Variable_2, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_3, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_1, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FVariantMapHandle Temp_struct_Variable_3, UParticleSystemComponent* K2Node_CustomEvent_Beam_1, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, ACharacter* CallFunc_GetCharacter_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetInputAxisValue_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item, UNiagaraComponent* CallFunc_SpawnAttached_NiagaraComponent, AActor* K2Node_CustomEvent_Target, FVector CallFunc_GetActorBounds_Origin, FVector CallFunc_GetActorBounds_BoxExtent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, AActor* CallFunc_GetUltimateOwner_ReturnValue, UInputComponent* CallFunc_GetComponentByClass_ReturnValue, UParticleSystemComponent* K2Node_CustomEvent_Beam, UParticleSystemComponent* K2Node_Event_BeamEmitter_1, UParticleSystemComponent* K2Node_Event_BeamEmitter) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.ExecuteUbergraph_BP_WingardiumSpell"));
    struct Params_ExecuteUbergraph_BP_WingardiumSpell {
        int32_t EntryPoint; // 0x0
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_15; // 0x4
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_14; // 0x8
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_13; // 0xc
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_12; // 0x10
        FVariantMapHandle Temp_struct_Variable; // 0x14
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_11; // 0x18
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_10; // 0x1c
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_9; // 0x20
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_8; // 0x24
        FVariantMapHandle Temp_struct_Variable_1; // 0x28
        char pad_2c[0x4];
        FNiagaraSystemSpawnAttachedPointInfo K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo; // 0x30
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_7; // 0xb0
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_6; // 0xb4
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_5; // 0xb8
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_4; // 0xbc
        FVariantMapHandle Temp_struct_Variable_2; // 0xc0
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_3; // 0xc4
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2; // 0xc8
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_1; // 0xcc
        FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle; // 0xd0
        FVariantMapHandle Temp_struct_Variable_3; // 0xd4
        UParticleSystemComponent* K2Node_CustomEvent_Beam_1; // 0xd8
        AActor* K2Node_Event_Target; // 0xe0
        USceneComponent* K2Node_Event_Component; // 0xe8
        bool K2Node_Event_bInTargetAffected; // 0xf0
        char pad_f1[0x7];
        ACharacter* CallFunc_GetCharacter_ReturnValue; // 0xf8
        float K2Node_Event_DeltaSeconds; // 0x100
        float CallFunc_GetInputAxisValue_ReturnValue; // 0x104
        APawn* CallFunc_GetPlayerPawn_ReturnValue; // 0x108
        TArray<USkeletalMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x110
        USkeletalMeshComponent* CallFunc_Array_Get_Item; // 0x120
        UNiagaraComponent* CallFunc_SpawnAttached_NiagaraComponent; // 0x128
        AActor* K2Node_CustomEvent_Target; // 0x130
        FVector CallFunc_GetActorBounds_Origin; // 0x138
        FVector CallFunc_GetActorBounds_BoxExtent; // 0x144
        bool CallFunc_IsValid_ReturnValue; // 0x150
        bool CallFunc_IsValid_ReturnValue_1; // 0x151
        bool CallFunc_IsValid_ReturnValue_2; // 0x152
        bool CallFunc_BooleanAND_ReturnValue; // 0x153
        bool CallFunc_IsValid_ReturnValue_3; // 0x154
        char pad_155[0x3];
        AActor* CallFunc_GetUltimateOwner_ReturnValue; // 0x158
        UInputComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x160
        UParticleSystemComponent* K2Node_CustomEvent_Beam; // 0x168
        UParticleSystemComponent* K2Node_Event_BeamEmitter_1; // 0x170
        UParticleSystemComponent* K2Node_Event_BeamEmitter; // 0x178
    }; // Size: 0x180
    Params_ExecuteUbergraph_BP_WingardiumSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_15 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_15;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_14 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_14;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_13 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_13;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_12 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_12;
    params.Temp_struct_Variable = (FVariantMapHandle)Temp_struct_Variable;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_11 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_11;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_10 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_10;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_9 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_9;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_8 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_8;
    params.Temp_struct_Variable_1 = (FVariantMapHandle)Temp_struct_Variable_1;
    params.K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo = (FNiagaraSystemSpawnAttachedPointInfo)K2Node_MakeStruct_NiagaraSystemSpawnAttachedPointInfo;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_7 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_7;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_6 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_6;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_5 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_5;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_4 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_4;
    params.Temp_struct_Variable_2 = (FVariantMapHandle)Temp_struct_Variable_2;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_3 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_3;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_2 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_2;
    params.K2Node_CustomInputActionEvent_VariantMapHandle_1 = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle_1;
    params.K2Node_CustomInputActionEvent_VariantMapHandle = (FVariantMapHandle)K2Node_CustomInputActionEvent_VariantMapHandle;
    params.Temp_struct_Variable_3 = (FVariantMapHandle)Temp_struct_Variable_3;
    params.K2Node_CustomEvent_Beam_1 = (UParticleSystemComponent*)K2Node_CustomEvent_Beam_1;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_Component = (USceneComponent*)K2Node_Event_Component;
    params.K2Node_Event_bInTargetAffected = (bool)K2Node_Event_bInTargetAffected;
    params.CallFunc_GetCharacter_ReturnValue = (ACharacter*)CallFunc_GetCharacter_ReturnValue;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_GetInputAxisValue_ReturnValue = (float)CallFunc_GetInputAxisValue_ReturnValue;
    params.CallFunc_GetPlayerPawn_ReturnValue = (APawn*)CallFunc_GetPlayerPawn_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<USkeletalMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (USkeletalMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_SpawnAttached_NiagaraComponent = (UNiagaraComponent*)CallFunc_SpawnAttached_NiagaraComponent;
    params.K2Node_CustomEvent_Target = (AActor*)K2Node_CustomEvent_Target;
    params.CallFunc_GetActorBounds_Origin = (FVector)CallFunc_GetActorBounds_Origin;
    params.CallFunc_GetActorBounds_BoxExtent = (FVector)CallFunc_GetActorBounds_BoxExtent;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    params.CallFunc_GetUltimateOwner_ReturnValue = (AActor*)CallFunc_GetUltimateOwner_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UInputComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.K2Node_CustomEvent_Beam = (UParticleSystemComponent*)K2Node_CustomEvent_Beam;
    params.K2Node_Event_BeamEmitter_1 = (UParticleSystemComponent*)K2Node_Event_BeamEmitter_1;
    params.K2Node_Event_BeamEmitter = (UParticleSystemComponent*)K2Node_Event_BeamEmitter;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
void ABP_WingardiumSpell_C::FadeBeamOut(UParticleSystemComponent* Beam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.FadeBeamOut"));
    struct Params_FadeBeamOut {
        UParticleSystemComponent* Beam; // 0x0
    }; // Size: 0x8
    Params_FadeBeamOut params{};
    params.Beam = (UParticleSystemComponent*)Beam;
    ProcessEvent(func, &params);
}
void ABP_WingardiumSpell_C::BeamFadeIn0(UParticleSystemComponent* BeamEmitter) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Wingardium/BP_WingardiumSpell.BP_WingardiumSpell_C.BeamFadeIn"));
    struct Params_BeamFadeIn {
        UParticleSystemComponent* BeamEmitter; // 0x0
    }; // Size: 0x8
    Params_BeamFadeIn params{};
    params.BeamEmitter = (UParticleSystemComponent*)BeamEmitter;
    ProcessEvent(func, &params);
}
