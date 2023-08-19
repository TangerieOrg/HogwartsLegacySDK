#include "AActor.hpp"
#include "ABP_RailTravel_C.hpp"
#include "ABiped_Player.hpp"
#include "APawn.hpp"
#include "ARailTravelStatue.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UBTT_Rail_C.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
#include "UBlackboardComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UParticleSystemComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USplineComponent.hpp"
void UBTT_Rail_C::ExitRail(bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.ExitRail"));
    struct Params_ExitRail {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        char pad_1[0x7];
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x8
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_ExitRail params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
UBTT_Rail_C* UBTT_Rail_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C");
    return (UBTT_Rail_C*)res;
}
void UBTT_Rail_C::ComputeTravelDirection(USplineComponent* SplineComponent, float& TravelDirection, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Get_DesiredWorldDirection_OutWorldDirection, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_FindDirectionClosestToWorldLocation_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.ComputeTravelDirection"));
    struct Params_ComputeTravelDirection {
        USplineComponent* SplineComponent; // 0x0
        float TravelDirection; // 0x8
        char pad_c[0x4];
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x10
        UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x3];
        FVector CallFunc_Get_DesiredWorldDirection_OutWorldDirection; // 0x24
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x30
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x38
        bool K2Node_DynamicCast_bSuccess_1; // 0x40
        char pad_41[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x44
        FVector CallFunc_FindDirectionClosestToWorldLocation_ReturnValue; // 0x50
        float CallFunc_Dot_VectorVector_ReturnValue; // 0x5c
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_ComputeTravelDirection params{};
    params.SplineComponent = (USplineComponent*)SplineComponent;
    params.TravelDirection = (float)TravelDirection;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.K2Node_DynamicCast_AsAmbulatory_Anim_Instance = (UAmbulatory_AnimInstance*)K2Node_DynamicCast_AsAmbulatory_Anim_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Get_DesiredWorldDirection_OutWorldDirection = (FVector)CallFunc_Get_DesiredWorldDirection_OutWorldDirection;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_FindDirectionClosestToWorldLocation_ReturnValue = (FVector)CallFunc_FindDirectionClosestToWorldLocation_ReturnValue;
    params.CallFunc_Dot_VectorVector_ReturnValue = (float)CallFunc_Dot_VectorVector_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    TravelDirection = params.TravelDirection;
}
void UBTT_Rail_C::TeleportToSplineEnd(FVector CallFunc_GetSplineTransformAtEnd_SplineLocation, FRotator CallFunc_GetSplineTransformAtEnd_SplineRotation, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SafeTeleportTo_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.TeleportToSplineEnd"));
    struct Params_TeleportToSplineEnd {
        FVector CallFunc_GetSplineTransformAtEnd_SplineLocation; // 0x0
        FRotator CallFunc_GetSplineTransformAtEnd_SplineRotation; // 0xc
        AActor* CallFunc_GetActorOwner_ReturnValue; // 0x18
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_SafeTeleportTo_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_TeleportToSplineEnd params{};
    params.CallFunc_GetSplineTransformAtEnd_SplineLocation = (FVector)CallFunc_GetSplineTransformAtEnd_SplineLocation;
    params.CallFunc_GetSplineTransformAtEnd_SplineRotation = (FRotator)CallFunc_GetSplineTransformAtEnd_SplineRotation;
    params.CallFunc_GetActorOwner_ReturnValue = (AActor*)CallFunc_GetActorOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_SafeTeleportTo_ReturnValue = (bool)CallFunc_SafeTeleportTo_ReturnValue;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::GetInteractActor(UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.GetInteractActor"));
    struct Params_GetInteractActor {
        UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue; // 0x0
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x8
        UObject* CallFunc_GetValueAsObject_ReturnValue; // 0x10
        AActor* K2Node_DynamicCast_AsActor; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_GetInteractActor params{};
    params.CallFunc_GetBlackboardComponent_ReturnValue = (UBlackboardComponent*)CallFunc_GetBlackboardComponent_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetValueAsObject_ReturnValue = (UObject*)CallFunc_GetValueAsObject_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::GetSplineTransformAtEnd(FVector& SplineLocation, FRotator& SplineRotation, float DistanceAlongSpline, FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.GetSplineTransformAtEnd"));
    struct Params_GetSplineTransformAtEnd {
        FVector SplineLocation; // 0x0
        FRotator SplineRotation; // 0xc
        float DistanceAlongSpline; // 0x18
        FRotator CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue; // 0x1c
        FVector CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue; // 0x28
        float CallFunc_BreakRotator_Roll; // 0x34
        float CallFunc_BreakRotator_Pitch; // 0x38
        float CallFunc_BreakRotator_Yaw; // 0x3c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x40
        float CallFunc_GetSplineLength_ReturnValue; // 0x44
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x48
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x54
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x58
    }; // Size: 0x59
    Params_GetSplineTransformAtEnd params{};
    params.SplineLocation = (FVector)SplineLocation;
    params.SplineRotation = (FRotator)SplineRotation;
    params.DistanceAlongSpline = (float)DistanceAlongSpline;
    params.CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue = (FRotator)CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = (FVector)CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_GetSplineLength_ReturnValue = (float)CallFunc_GetSplineLength_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    SplineLocation = params.SplineLocation;
    SplineRotation = params.SplineRotation;
}
void UBTT_Rail_C::SpawnStatue(AActor* ParentActor, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, ABP_RailTravel_C* K2Node_DynamicCast_AsBP_Rail_Travel, bool K2Node_DynamicCast_bSuccess_1, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, ARailTravelStatue* K2Node_DynamicCast_AsRail_Travel_Statue, bool K2Node_DynamicCast_bSuccess_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.SpawnStatue"));
    struct Params_SpawnStatue {
        AActor* ParentActor; // 0x0
        APawn* K2Node_DynamicCast_AsPawn; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        ABP_RailTravel_C* K2Node_DynamicCast_AsBP_Rail_Travel; // 0x18
        bool K2Node_DynamicCast_bSuccess_1; // 0x20
        char pad_21[0xf];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x30
        FVector CallFunc_BreakTransform_Location; // 0x60
        FRotator CallFunc_BreakTransform_Rotation; // 0x6c
        FVector CallFunc_BreakTransform_Scale; // 0x78
        char pad_84[0x4];
        UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x88
        float CallFunc_BreakVector_X; // 0x90
        float CallFunc_BreakVector_Y; // 0x94
        float CallFunc_BreakVector_Z; // 0x98
        char pad_9c[0x4];
        UClass* K2Node_ClassDynamicCast_AsActor; // 0xa0
        bool K2Node_ClassDynamicCast_bSuccess; // 0xa8
        char pad_a9[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xac
        FVector CallFunc_MakeVector_ReturnValue; // 0xb0
        char pad_bc[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0xc0
        USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue; // 0xf0
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xf8
        AActor* CallFunc_FinishSpawningActor_ReturnValue; // 0x100
        ARailTravelStatue* K2Node_DynamicCast_AsRail_Travel_Statue; // 0x108
        bool K2Node_DynamicCast_bSuccess_2; // 0x110
    }; // Size: 0x111
    Params_SpawnStatue params{};
    params.ParentActor = (AActor*)ParentActor;
    params.K2Node_DynamicCast_AsPawn = (APawn*)K2Node_DynamicCast_AsPawn;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBP_Rail_Travel = (ABP_RailTravel_C*)K2Node_DynamicCast_AsBP_Rail_Travel;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = (UClass*)CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.K2Node_ClassDynamicCast_AsActor = (UClass*)K2Node_ClassDynamicCast_AsActor;
    params.K2Node_ClassDynamicCast_bSuccess = (bool)K2Node_ClassDynamicCast_bSuccess;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (USkeletalMeshComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (AActor*)CallFunc_FinishSpawningActor_ReturnValue;
    params.K2Node_DynamicCast_AsRail_Travel_Statue = (ARailTravelStatue*)K2Node_DynamicCast_AsRail_Travel_Statue;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::SetContexts(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.SetContexts"));
    struct Params_SetContexts {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetContexts params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_2"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_2 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_1"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_1 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.InpActEvt_Move_K2Node_CustomStickInputActionEvent_0"));
    struct Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_Move_K2Node_CustomStickInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::FadeOutComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.FadeOutComplete"));
    struct Params_FadeOutComplete {
    }; // Size: 0x0
    Params_FadeOutComplete params{};
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Shared/StateTree/BTT_Rail.BTT_Rail_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_Rail_C::ExecuteUbergraph_BTT_Rail(int32_t EntryPoint) {}
