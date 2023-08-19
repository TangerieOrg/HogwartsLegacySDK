#include "AActor.hpp"
#include "ABP_Portcullis_Base_C.hpp"
#include "EAlohomoraLevel.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ELockDifficulty.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FDateTime.hpp"
#include "FEventDateTime.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimeEvent.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UPadlockComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UScheduler.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_Portcullis_Base_C::UpdateCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.UpdateCallout"));
    struct Params_UpdateCallout {
    }; // Size: 0x0
    Params_UpdateCallout params{};
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.OnUnlocked"));
    struct Params_OnUnlocked {
        bool OpenLockable; // 0x0
        bool ThrowLock; // 0x1
        bool PlaySoundsAndEffects; // 0x2
        bool FromMinigame; // 0x3
    }; // Size: 0x4
    Params_OnUnlocked params{};
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    params.FromMinigame = (bool)FromMinigame;
    ProcessEvent(func, &params);
}
ABP_Portcullis_Base_C* ABP_Portcullis_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C");
    return (ABP_Portcullis_Base_C*)res;
}
UMeshComponent* ABP_Portcullis_Base_C::GetAttachToMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.GetAttachToMesh"));
    struct Params_GetAttachToMesh {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachToMesh params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
FVector ABP_Portcullis_Base_C::GetSoundPos(FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.GetSoundPos"));
    struct Params_GetSoundPos {
        FVector ReturnValue; // 0x0
        FVector CallFunc_GetComponentBounds_Origin; // 0xc
        FVector CallFunc_GetComponentBounds_BoxExtent; // 0x18
        float CallFunc_GetComponentBounds_SphereRadius; // 0x24
    }; // Size: 0x28
    Params_GetSoundPos params{};
    params.CallFunc_GetComponentBounds_Origin = (FVector)CallFunc_GetComponentBounds_Origin;
    params.CallFunc_GetComponentBounds_BoxExtent = (FVector)CallFunc_GetComponentBounds_BoxExtent;
    params.CallFunc_GetComponentBounds_SphereRadius = (float)CallFunc_GetComponentBounds_SphereRadius;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABP_Portcullis_Base_C::SetInitialPosition(int32_t convertedCurrentTime, int32_t convertedOpenTime, int32_t convertedCloseTime, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UScheduler* CallFunc_Get_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, FDateTime CallFunc_GetSimulatedTime_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_BreakDateTime_Year, int32_t CallFunc_BreakDateTime_Month, int32_t CallFunc_BreakDateTime_Day, int32_t CallFunc_BreakDateTime_Hour, int32_t CallFunc_BreakDateTime_Minute, int32_t CallFunc_BreakDateTime_Second, int32_t CallFunc_BreakDateTime_Millisecond, int32_t CallFunc_Multiply_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.SetInitialPosition"));
    struct Params_SetInitialPosition {
        int32_t convertedCurrentTime; // 0x0
        int32_t convertedOpenTime; // 0x4
        int32_t convertedCloseTime; // 0x8
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0xc
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x94
        bool CallFunc_Less_IntInt_ReturnValue; // 0x11c
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x11d
        bool CallFunc_BooleanAND_ReturnValue; // 0x11e
        char pad_11f[0x1];
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x120
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x124
        UScheduler* CallFunc_Get_ReturnValue; // 0x128
        int32_t CallFunc_Multiply_IntInt_ReturnValue_1; // 0x130
        char pad_134[0x4];
        FDateTime CallFunc_GetSimulatedTime_ReturnValue; // 0x138
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x140
        int32_t CallFunc_BreakDateTime_Year; // 0x144
        int32_t CallFunc_BreakDateTime_Month; // 0x148
        int32_t CallFunc_BreakDateTime_Day; // 0x14c
        int32_t CallFunc_BreakDateTime_Hour; // 0x150
        int32_t CallFunc_BreakDateTime_Minute; // 0x154
        int32_t CallFunc_BreakDateTime_Second; // 0x158
        int32_t CallFunc_BreakDateTime_Millisecond; // 0x15c
        int32_t CallFunc_Multiply_IntInt_ReturnValue_2; // 0x160
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x164
    }; // Size: 0x168
    Params_SetInitialPosition params{};
    params.convertedCurrentTime = (int32_t)convertedCurrentTime;
    params.convertedOpenTime = (int32_t)convertedOpenTime;
    params.convertedCloseTime = (int32_t)convertedCloseTime;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UScheduler*)CallFunc_Get_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue_1 = (int32_t)CallFunc_Multiply_IntInt_ReturnValue_1;
    params.CallFunc_GetSimulatedTime_ReturnValue = (FDateTime)CallFunc_GetSimulatedTime_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_BreakDateTime_Year = (int32_t)CallFunc_BreakDateTime_Year;
    params.CallFunc_BreakDateTime_Month = (int32_t)CallFunc_BreakDateTime_Month;
    params.CallFunc_BreakDateTime_Day = (int32_t)CallFunc_BreakDateTime_Day;
    params.CallFunc_BreakDateTime_Hour = (int32_t)CallFunc_BreakDateTime_Hour;
    params.CallFunc_BreakDateTime_Minute = (int32_t)CallFunc_BreakDateTime_Minute;
    params.CallFunc_BreakDateTime_Second = (int32_t)CallFunc_BreakDateTime_Second;
    params.CallFunc_BreakDateTime_Millisecond = (int32_t)CallFunc_BreakDateTime_Millisecond;
    params.CallFunc_Multiply_IntInt_ReturnValue_2 = (int32_t)CallFunc_Multiply_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::CompareTimeEvent(FTimeEvent TimeEvent, FDateTime CallFunc_GetSimulateDateTimeBP_ReturnValue, int32_t CallFunc_BreakDateTime_Year, int32_t CallFunc_BreakDateTime_Month, int32_t CallFunc_BreakDateTime_Day, int32_t CallFunc_BreakDateTime_Hour, int32_t CallFunc_BreakDateTime_Minute, int32_t CallFunc_BreakDateTime_Second, int32_t CallFunc_BreakDateTime_Millisecond, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.CompareTimeEvent"));
    struct Params_CompareTimeEvent {
        FTimeEvent TimeEvent; // 0x0
        FDateTime CallFunc_GetSimulateDateTimeBP_ReturnValue; // 0x30
        int32_t CallFunc_BreakDateTime_Year; // 0x38
        int32_t CallFunc_BreakDateTime_Month; // 0x3c
        int32_t CallFunc_BreakDateTime_Day; // 0x40
        int32_t CallFunc_BreakDateTime_Hour; // 0x44
        int32_t CallFunc_BreakDateTime_Minute; // 0x48
        int32_t CallFunc_BreakDateTime_Second; // 0x4c
        int32_t CallFunc_BreakDateTime_Millisecond; // 0x50
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x54
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0x55
    }; // Size: 0x56
    Params_CompareTimeEvent params{};
    params.TimeEvent = (FTimeEvent)TimeEvent;
    params.CallFunc_GetSimulateDateTimeBP_ReturnValue = (FDateTime)CallFunc_GetSimulateDateTimeBP_ReturnValue;
    params.CallFunc_BreakDateTime_Year = (int32_t)CallFunc_BreakDateTime_Year;
    params.CallFunc_BreakDateTime_Month = (int32_t)CallFunc_BreakDateTime_Month;
    params.CallFunc_BreakDateTime_Day = (int32_t)CallFunc_BreakDateTime_Day;
    params.CallFunc_BreakDateTime_Hour = (int32_t)CallFunc_BreakDateTime_Hour;
    params.CallFunc_BreakDateTime_Minute = (int32_t)CallFunc_BreakDateTime_Minute;
    params.CallFunc_BreakDateTime_Second = (int32_t)CallFunc_BreakDateTime_Second;
    params.CallFunc_BreakDateTime_Millisecond = (int32_t)CallFunc_BreakDateTime_Millisecond;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::HasRequiredAlohomoraLevel(int32_t RequiredLevel, bool& canCast, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, EAlohomoraLevel CallFunc_GetAlohomoraLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.HasRequiredAlohomoraLevel"));
    struct Params_HasRequiredAlohomoraLevel {
        int32_t RequiredLevel; // 0x0
        bool canCast; // 0x4
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x5
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0x6
        bool CallFunc_EqualEqual_IntInt_ReturnValue_2; // 0x7
        bool CallFunc_BooleanOR_ReturnValue; // 0x8
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x9
        bool CallFunc_BooleanOR_ReturnValue_2; // 0xa
        EAlohomoraLevel CallFunc_GetAlohomoraLevel_ReturnValue; // 0xb
        bool K2Node_SwitchEnum_CmpSuccess; // 0xc
    }; // Size: 0xd
    Params_HasRequiredAlohomoraLevel params{};
    params.RequiredLevel = (int32_t)RequiredLevel;
    params.canCast = (bool)canCast;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_2 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_GetAlohomoraLevel_ReturnValue = (EAlohomoraLevel)CallFunc_GetAlohomoraLevel_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    canCast = params.canCast;
}
void ABP_Portcullis_Base_C::UserConstructionScript0(FName Temp_name_Variable, FName Temp_name_Variable_1, int32_t Temp_int_Variable, ELockDifficulty Temp_byte_Variable, ELockDifficulty Temp_byte_Variable_1, ELockDifficulty Temp_byte_Variable_2, int32_t CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Clamp_ReturnValue, ELockDifficulty K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_RotateAngleAxis_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FName Temp_name_Variable; // 0x0
        FName Temp_name_Variable_1; // 0x8
        int32_t Temp_int_Variable; // 0x10
        ELockDifficulty Temp_byte_Variable; // 0x14
        ELockDifficulty Temp_byte_Variable_1; // 0x15
        ELockDifficulty Temp_byte_Variable_2; // 0x16
        char pad_17[0x1];
        int32_t CallFunc_Array_AddUnique_ReturnValue; // 0x18
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1c
        char pad_1d[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x20
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x24
        char pad_25[0x3];
        int32_t CallFunc_Clamp_ReturnValue; // 0x28
        ELockDifficulty K2Node_Select_Default; // 0x2c
        bool CallFunc_BooleanAND_ReturnValue; // 0x2d
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x2e
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x2f
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x30
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x3c
        char pad_c4[0xc];
        FTransform CallFunc_GetTransform_ReturnValue; // 0xd0
        bool CallFunc_Array_RemoveItem_ReturnValue; // 0x100
        char pad_101[0x3];
        FVector CallFunc_BreakTransform_Location; // 0x104
        FRotator CallFunc_BreakTransform_Rotation; // 0x110
        FVector CallFunc_BreakTransform_Scale; // 0x11c
        float CallFunc_BreakRotator_Roll; // 0x128
        float CallFunc_BreakRotator_Pitch; // 0x12c
        float CallFunc_BreakRotator_Yaw; // 0x130
        FVector CallFunc_RotateAngleAxis_ReturnValue; // 0x134
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x140
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x14c
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2; // 0x1d4
    }; // Size: 0x25c
    Params_UserConstructionScript params{};
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.Temp_name_Variable_1 = (FName)Temp_name_Variable_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_byte_Variable = (ELockDifficulty)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ELockDifficulty)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ELockDifficulty)Temp_byte_Variable_2;
    params.CallFunc_Array_AddUnique_ReturnValue = (int32_t)CallFunc_Array_AddUnique_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Clamp_ReturnValue = (int32_t)CallFunc_Clamp_ReturnValue;
    params.K2Node_Select_Default = (ELockDifficulty)K2Node_Select_Default;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_Array_RemoveItem_ReturnValue = (bool)CallFunc_Array_RemoveItem_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_RotateAngleAxis_ReturnValue = (FVector)CallFunc_RotateAngleAxis_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::Open__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.Open__FinishedFunc"));
    struct Params_Open__FinishedFunc {
    }; // Size: 0x0
    Params_Open__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::Open__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.Open__UpdateFunc"));
    struct Params_Open__UpdateFunc {
    }; // Size: 0x0
    Params_Open__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Portcullis_Base_C::BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::OpenGate(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.OpenGate"));
    struct Params_OpenGate {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_OpenGate params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void ABP_Portcullis_Base_C::OnLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.OnLocked"));
    struct Params_OnLocked {
    }; // Size: 0x0
    Params_OnLocked params{};
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::SetAudioSwitch(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.SetAudioSwitch"));
    struct Params_SetAudioSwitch {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetAudioSwitch params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
void ABP_Portcullis_Base_C::CloseGate(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/Portcullis/BP_Portcullis_Base.BP_Portcullis_Base_C.CloseGate"));
    struct Params_CloseGate {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_CloseGate params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void ABP_Portcullis_Base_C::ExecuteUbergraph_BP_Portcullis_Base(int32_t EntryPoint) {}
