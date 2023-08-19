#include "AActor.hpp"
#include "ABP_FlyingBroomCapsule_C.hpp"
#include "AFlyingBroom.hpp"
#include "ESlateVisibility.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_AccentVFX.hpp"
#include "FSTR_BroomStats.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFlyingBroomAudio.hpp"
#include "UFlyingBroomMovementComponent.hpp"
#include "UFunction.hpp"
#include "UMountHeightLimitComponent.hpp"
#include "UMountStreamingComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_FlyingBroomCapsule_C* ABP_FlyingBroomCapsule_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C");
    return (ABP_FlyingBroomCapsule_C*)res;
}
void ABP_FlyingBroomCapsule_C::OnNPCMountBroom0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.OnNPCMountBroom"));
    struct Params_OnNPCMountBroom {
    }; // Size: 0x0
    Params_OnNPCMountBroom params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomCapsule_C::ApplyBroomStats0(bool StatsUnlocked, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_GetLockName_ReturnValue, FName CallFunc_GetLockName_ReturnValue_1, FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats, FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats_1, FName CallFunc_GetLockName_ReturnValue_2, FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats_2, TArray<FSTR_BroomStats>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue, FSTR_BroomStats CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.ApplyBroomStats"));
    struct Params_ApplyBroomStats {
        bool StatsUnlocked; // 0x0
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x1
        char pad_2[0x2];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        FName CallFunc_GetLockName_ReturnValue; // 0x14
        FName CallFunc_GetLockName_ReturnValue_1; // 0x1c
        char pad_24[0x4];
        FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats; // 0x28
        FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats_1; // 0x38
        FName CallFunc_GetLockName_ReturnValue_2; // 0x48
        FSTR_BroomStats K2Node_MakeStruct_STR_BroomStats_2; // 0x50
        TArray<FSTR_BroomStats> K2Node_MakeArray_Array; // 0x60
        int32_t CallFunc_Array_Length_ReturnValue; // 0x70
        char pad_74[0x4];
        FSTR_BroomStats CallFunc_Array_Get_Item; // 0x78
        bool CallFunc_Less_IntInt_ReturnValue; // 0x88
        bool CallFunc_BooleanAND_ReturnValue; // 0x89
        bool CallFunc_IsUnlockedPure_ReturnValue; // 0x8a
    }; // Size: 0x8b
    Params_ApplyBroomStats params{};
    params.StatsUnlocked = (bool)StatsUnlocked;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetLockName_ReturnValue = (FName)CallFunc_GetLockName_ReturnValue;
    params.CallFunc_GetLockName_ReturnValue_1 = (FName)CallFunc_GetLockName_ReturnValue_1;
    params.K2Node_MakeStruct_STR_BroomStats = (FSTR_BroomStats)K2Node_MakeStruct_STR_BroomStats;
    params.K2Node_MakeStruct_STR_BroomStats_1 = (FSTR_BroomStats)K2Node_MakeStruct_STR_BroomStats_1;
    params.CallFunc_GetLockName_ReturnValue_2 = (FName)CallFunc_GetLockName_ReturnValue_2;
    params.K2Node_MakeStruct_STR_BroomStats_2 = (FSTR_BroomStats)K2Node_MakeStruct_STR_BroomStats_2;
    params.K2Node_MakeArray_Array = (TArray<FSTR_BroomStats>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSTR_BroomStats)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsUnlockedPure_ReturnValue = (bool)CallFunc_IsUnlockedPure_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void ABP_FlyingBroomCapsule_C::OnTurboStart0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FlyingBroomCapsule_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomCapsule_C::OnPlayerDismountBroom0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FlyingBroomCapsule_C::OnPlayerMountBroom0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FlyingBroomCapsule_C::UpdatePitchAudio(UFlyingBroomAudio*& BroomAudio, float MaxAudioHeight, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FlyingBroomCapsule_C::OnBarrelRollStart0(bool bRollLeft, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FlyingBroomCapsule_C::OnBoostStart0(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FlyingBroomCapsule_C::UpdateBroomAudio0(UFlyingBroomAudio* BroomAudio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdateBroomAudio"));
    struct Params_UpdateBroomAudio {
        UFlyingBroomAudio* BroomAudio; // 0x0
    }; // Size: 0x8
    Params_UpdateBroomAudio params{};
    params.BroomAudio = (UFlyingBroomAudio*)BroomAudio;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomCapsule_C::UpdateHeightAudio(UFlyingBroomAudio*& BroomAudio, float MaxAudioHeight, TArray<AActor*>& Temp_object_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_SelectFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdateHeightAudio"));
    struct Params_UpdateHeightAudio {
        UFlyingBroomAudio* BroomAudio; // 0x0
        float MaxAudioHeight; // 0x8
        char pad_c[0x4];
        TArray<AActor*> Temp_object_Variable; // 0x10
        float CallFunc_BreakVector2D_X; // 0x20
        float CallFunc_BreakVector2D_Y; // 0x24
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x28
        FVector CallFunc_MakeVector_ReturnValue; // 0x34
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x40
        FHitResult CallFunc_LineTraceSingle_OutHit; // 0x4c
        bool CallFunc_LineTraceSingle_ReturnValue; // 0xd4
        bool CallFunc_BreakHitResult_bBlockingHit; // 0xd5
        bool CallFunc_BreakHitResult_bInitialOverlap; // 0xd6
        char pad_d7[0x1];
        float CallFunc_BreakHitResult_Time; // 0xd8
        float CallFunc_BreakHitResult_Distance; // 0xdc
        FVector CallFunc_BreakHitResult_Location; // 0xe0
        FVector CallFunc_BreakHitResult_ImpactPoint; // 0xec
        FVector CallFunc_BreakHitResult_Normal; // 0xf8
        FVector CallFunc_BreakHitResult_ImpactNormal; // 0x104
        UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0x110
        AActor* CallFunc_BreakHitResult_HitActor; // 0x118
        UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0x120
        FName CallFunc_BreakHitResult_HitBoneName; // 0x128
        int32_t CallFunc_BreakHitResult_HitItem; // 0x130
        int32_t CallFunc_BreakHitResult_ElementIndex; // 0x134
        int32_t CallFunc_BreakHitResult_FaceIndex; // 0x138
        FVector CallFunc_BreakHitResult_TraceStart; // 0x13c
        FVector CallFunc_BreakHitResult_TraceEnd; // 0x148
        float CallFunc_SelectFloat_ReturnValue; // 0x154
    }; // Size: 0x158
    Params_UpdateHeightAudio params{};
    params.BroomAudio = (UFlyingBroomAudio*)BroomAudio;
    params.MaxAudioHeight = (float)MaxAudioHeight;
    params.Temp_object_Variable = (TArray<AActor*>)Temp_object_Variable;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_LineTraceSingle_OutHit = (FHitResult)CallFunc_LineTraceSingle_OutHit;
    params.CallFunc_LineTraceSingle_ReturnValue = (bool)CallFunc_LineTraceSingle_ReturnValue;
    params.CallFunc_BreakHitResult_bBlockingHit = (bool)CallFunc_BreakHitResult_bBlockingHit;
    params.CallFunc_BreakHitResult_bInitialOverlap = (bool)CallFunc_BreakHitResult_bInitialOverlap;
    params.CallFunc_BreakHitResult_Time = (float)CallFunc_BreakHitResult_Time;
    params.CallFunc_BreakHitResult_Distance = (float)CallFunc_BreakHitResult_Distance;
    params.CallFunc_BreakHitResult_Location = (FVector)CallFunc_BreakHitResult_Location;
    params.CallFunc_BreakHitResult_ImpactPoint = (FVector)CallFunc_BreakHitResult_ImpactPoint;
    params.CallFunc_BreakHitResult_Normal = (FVector)CallFunc_BreakHitResult_Normal;
    params.CallFunc_BreakHitResult_ImpactNormal = (FVector)CallFunc_BreakHitResult_ImpactNormal;
    params.CallFunc_BreakHitResult_PhysMat = (UPhysicalMaterial*)CallFunc_BreakHitResult_PhysMat;
    params.CallFunc_BreakHitResult_HitActor = (AActor*)CallFunc_BreakHitResult_HitActor;
    params.CallFunc_BreakHitResult_HitComponent = (UPrimitiveComponent*)CallFunc_BreakHitResult_HitComponent;
    params.CallFunc_BreakHitResult_HitBoneName = (FName)CallFunc_BreakHitResult_HitBoneName;
    params.CallFunc_BreakHitResult_HitItem = (int32_t)CallFunc_BreakHitResult_HitItem;
    params.CallFunc_BreakHitResult_ElementIndex = (int32_t)CallFunc_BreakHitResult_ElementIndex;
    params.CallFunc_BreakHitResult_FaceIndex = (int32_t)CallFunc_BreakHitResult_FaceIndex;
    params.CallFunc_BreakHitResult_TraceStart = (FVector)CallFunc_BreakHitResult_TraceStart;
    params.CallFunc_BreakHitResult_TraceEnd = (FVector)CallFunc_BreakHitResult_TraceEnd;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    ProcessEvent(func, &params);
    Temp_object_Variable = params.Temp_object_Variable;
    BroomAudio = params.BroomAudio;
}
void ABP_FlyingBroomCapsule_C::UpdateSpeedAudio(UFlyingBroomAudio*& BroomAudio, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.UpdateSpeedAudio"));
    struct Params_UpdateSpeedAudio {
        UFlyingBroomAudio* BroomAudio; // 0x0
        FVector CallFunc_GetVelocity_ReturnValue; // 0x8
        float CallFunc_VSize_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_UpdateSpeedAudio params{};
    params.BroomAudio = (UFlyingBroomAudio*)BroomAudio;
    params.CallFunc_GetVelocity_ReturnValue = (FVector)CallFunc_GetVelocity_ReturnValue;
    params.CallFunc_VSize_ReturnValue = (float)CallFunc_VSize_ReturnValue;
    ProcessEvent(func, &params);
    BroomAudio = params.BroomAudio;
}
void ABP_FlyingBroomCapsule_C::DisableSpellHUD0(bool DisableSpellHUD, bool DisableHealtHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.DisableSpellHUD"));
    struct Params_DisableSpellHUD {
        bool DisableSpellHUD; // 0x0
        bool DisableHealtHUD; // 0x1
    }; // Size: 0x2
    Params_DisableSpellHUD params{};
    params.DisableSpellHUD = (bool)DisableSpellHUD;
    params.DisableHealtHUD = (bool)DisableHealtHUD;
    ProcessEvent(func, &params);
}
void ABP_FlyingBroomCapsule_C::MunitionImpact(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/Brooms/BP_FlyingBroomCapsule.BP_FlyingBroomCapsule_C.MunitionImpact"));
    struct Params_MunitionImpact {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_MunitionImpact params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void ABP_FlyingBroomCapsule_C::ExecuteUbergraph_BP_FlyingBroomCapsule(int32_t EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_4, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, FVector CallFunc_GetActorForwardVector_ReturnValue) {}
