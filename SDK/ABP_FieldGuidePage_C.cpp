#include "AActor.hpp"
#include "ABP_FieldGuidePage_C.hpp"
#include "ABiped_Player.hpp"
#include "AFieldGuideHotSpot.hpp"
#include "ASpellTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FQuat.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UABP_PaperAndQuill_C.hpp"
#include "UAkComponent.hpp"
#include "UAnimInstance.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UObjectStateComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpellToolRecord.hpp"
#include "USphereComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_FieldGuidePage_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnHitBySpell"));
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
ABP_FieldGuidePage_C* ABP_FieldGuidePage_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C");
    return (ABP_FieldGuidePage_C*)res;
}
void ABP_FieldGuidePage_C::ComputeMoveToObjectOfInterestDestination(FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.ComputeMoveToObjectOfInterestDestination"));
    struct Params_ComputeMoveToObjectOfInterestDestination {
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0xc
        char pad_18[0x8];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x20
    }; // Size: 0x50
    Params_ComputeMoveToObjectOfInterestDestination params{};
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::AccioStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.AccioStart"));
    struct Params_AccioStart {
    }; // Size: 0x0
    Params_AccioStart params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::CollectPage() {}
void ABP_FieldGuidePage_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::NoLongerPerceived_AutoTarget(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.NoLongerPerceived_AutoTarget"));
    struct Params_NoLongerPerceived_AutoTarget {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_AutoTarget params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::MoveToDestination(float DeltaTime, float InterpSpeed, bool& ReachedDestination, float DesiredDelta, FVector DirectionToDestination, float DistanceToDestination, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_VInterpTo_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, FRotator CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.MoveToDestination"));
    struct Params_MoveToDestination {
        float DeltaTime; // 0x0
        float InterpSpeed; // 0x4
        bool ReachedDestination; // 0x8
        char pad_9[0x3];
        float DesiredDelta; // 0xc
        FVector DirectionToDestination; // 0x10
        float DistanceToDestination; // 0x1c
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x20
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x28
        FVector CallFunc_GetSocketLocation_ReturnValue; // 0x34
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x40
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x4c
        FVector CallFunc_VInterpTo_ReturnValue; // 0x58
        FVector CallFunc_BreakTransform_Location; // 0x64
        FRotator CallFunc_BreakTransform_Rotation; // 0x70
        FVector CallFunc_BreakTransform_Scale; // 0x7c
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x88
        char pad_89[0x3];
        FRotator CallFunc_RInterpTo_ReturnValue; // 0x8c
        bool CallFunc_K2_SetActorRotation_ReturnValue; // 0x98
        bool CallFunc_Not_PreBool_ReturnValue; // 0x99
        char pad_9a[0x2];
        FHitResult CallFunc_K2_SetActorLocation_SweepHitResult; // 0x9c
        bool CallFunc_K2_SetActorLocation_ReturnValue; // 0x124
    }; // Size: 0x125
    Params_MoveToDestination params{};
    params.DeltaTime = (float)DeltaTime;
    params.InterpSpeed = (float)InterpSpeed;
    params.ReachedDestination = (bool)ReachedDestination;
    params.DesiredDelta = (float)DesiredDelta;
    params.DirectionToDestination = (FVector)DirectionToDestination;
    params.DistanceToDestination = (float)DistanceToDestination;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_GetSocketLocation_ReturnValue = (FVector)CallFunc_GetSocketLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_VInterpTo_ReturnValue = (FVector)CallFunc_VInterpTo_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_RInterpTo_ReturnValue = (FRotator)CallFunc_RInterpTo_ReturnValue;
    params.CallFunc_K2_SetActorRotation_ReturnValue = (bool)CallFunc_K2_SetActorRotation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_K2_SetActorLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetActorLocation_SweepHitResult;
    params.CallFunc_K2_SetActorLocation_ReturnValue = (bool)CallFunc_K2_SetActorLocation_ReturnValue;
    ProcessEvent(func, &params);
    ReachedDestination = params.ReachedDestination;
}
void ABP_FieldGuidePage_C::Perceived_AutoTarget(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.Perceived_AutoTarget"));
    struct Params_Perceived_AutoTarget {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_AutoTarget params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::PageGoAway(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_FieldGuidePage_C::ComputeMoveOutFromPlayerDestination(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Vector_Normal2D_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UABP_PaperAndQuill_C* K2Node_DynamicCast_AsABP_Paper_and_Quill, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_NegateVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FQuat CallFunc_Conv_VectorToQuaternion_ReturnValue, FRotator CallFunc_Quat_Rotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.ComputeMoveOutFromPlayerDestination"));
    struct Params_ComputeMoveOutFromPlayerDestination {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x14
        float CallFunc_BreakVector_X; // 0x20
        float CallFunc_BreakVector_Y; // 0x24
        float CallFunc_BreakVector_Z; // 0x28
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x2c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x38
        FVector CallFunc_Vector_Normal2D_ReturnValue; // 0x3c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x48
        char pad_54[0x4];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x58
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x60
        char pad_6c[0x4];
        UABP_PaperAndQuill_C* K2Node_DynamicCast_AsABP_Paper_and_Quill; // 0x70
        bool K2Node_DynamicCast_bSuccess; // 0x78
        char pad_79[0x3];
        float CallFunc_BreakVector_X_1; // 0x7c
        float CallFunc_BreakVector_Y_1; // 0x80
        float CallFunc_BreakVector_Z_1; // 0x84
        FVector CallFunc_NegateVector_ReturnValue; // 0x88
        FVector CallFunc_MakeVector_ReturnValue; // 0x94
        FQuat CallFunc_Conv_VectorToQuaternion_ReturnValue; // 0xa0
        FRotator CallFunc_Quat_Rotator_ReturnValue; // 0xb0
        char pad_bc[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0xc0
    }; // Size: 0xf0
    Params_ComputeMoveOutFromPlayerDestination params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Vector_Normal2D_ReturnValue = (FVector)CallFunc_Vector_Normal2D_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.K2Node_DynamicCast_AsABP_Paper_and_Quill = (UABP_PaperAndQuill_C*)K2Node_DynamicCast_AsABP_Paper_and_Quill;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_NegateVector_ReturnValue = (FVector)CallFunc_NegateVector_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Conv_VectorToQuaternion_ReturnValue = (FQuat)CallFunc_Conv_VectorToQuaternion_ReturnValue;
    params.CallFunc_Quat_Rotator_ReturnValue = (FRotator)CallFunc_Quat_Rotator_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::SelfDestruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.SelfDestruct"));
    struct Params_SelfDestruct {
    }; // Size: 0x0
    Params_SelfDestruct params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::RevelioEnd(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.RevelioEnd"));
    struct Params_RevelioEnd {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RevelioEnd params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::RevelioStart(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.RevelioStart"));
    struct Params_RevelioStart {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_RevelioStart params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnOverlappedBySpell"));
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
void ABP_FieldGuidePage_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnAffectedBySpellEnd"));
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
void ABP_FieldGuidePage_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.OnAffectedBySpell"));
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
void ABP_FieldGuidePage_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuidePage.BP_FieldGuidePage_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_FieldGuidePage_C::ExecuteUbergraph_BP_FieldGuidePage(int32_t EntryPoint) {}
