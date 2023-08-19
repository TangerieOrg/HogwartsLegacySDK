#include "AActor.hpp"
#include "ABP_CutCam_C.hpp"
#include "ABiped_Player.hpp"
#include "ACameraStackActor.hpp"
#include "ACharacter.hpp"
#include "APlayerCameraManager.hpp"
#include "APlayerController.hpp"
#include "ECameraStackLookAtStrength.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_CameraType\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UCameraComponent.hpp"
#include "UCineCameraComponent.hpp"
#include "UFunction.hpp"
#include "UPhoenixHUDWidget.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
#include "UTimelineComponent.hpp"
#include "UUIManager.hpp"
void ABP_CutCam_C::ExecuteUbergraph_BP_CutCam(int32_t EntryPoint, int32_t Temp_int_Variable, bool Temp_bool_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32_t Temp_int_Variable_1, bool Temp_bool_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_1, float Temp_float_Variable_1, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, int32_t Temp_int_Variable_2, bool Temp_bool_Variable_6, int32_t CallFunc_Add_IntInt_ReturnValue_2, float Temp_float_Variable_2, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Variable_10, bool CallFunc_Not_PreBool_ReturnValue_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_8, bool Temp_bool_Variable_11, bool CallFunc_Not_PreBool_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_10, bool Temp_bool_Variable_12, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_5, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32_t Temp_int_Variable_3, int32_t Temp_int_Variable_4, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, float Temp_float_Variable_3, bool Temp_bool_Variable_15, bool Temp_bool_IsClosed_Variable, float K2Node_Select_Default_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_16, APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Select_Default_3, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, int32_t CallFunc_Array_Length_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_2, AActor* CallFunc_GetViewTarget_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_5, UUIManager* CallFunc_Get_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool Temp_bool_Variable_17, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, float K2Node_Select_Default_6, bool CallFunc_Greater_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_11, APlayerController* CallFunc_GetPlayerController_ReturnValue_3, APlayerController* CallFunc_GetPlayerController_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_6, AActor* CallFunc_Array_Get_Item) {}
ABP_CutCam_C* ABP_CutCam_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C");
    return (ABP_CutCam_C*)res;
}
void ABP_CutCam_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::Aim_On_Complete(bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue) {}
void ABP_CutCam_C::SetSplineCam(float Time, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetRightVectorAtTime_ReturnValue, FVector CallFunc_GetLocationAtTime_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FRotator CallFunc_RLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.SetSplineCam"));
    struct Params_SetSplineCam {
        float Time; // 0x0
        float CallFunc_GetWorldDeltaSeconds_ReturnValue; // 0x4
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x8
        float CallFunc_GetWorldDeltaSeconds_ReturnValue_1; // 0xc
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x10
        char pad_18[0x8];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x20
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x50
        bool CallFunc_IsValid_ReturnValue; // 0x5c
        char pad_5d[0x3];
        FVector CallFunc_InverseTransformLocation_ReturnValue; // 0x60
        bool CallFunc_Not_PreBool_ReturnValue; // 0x6c
        char pad_6d[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x70
        FVector CallFunc_GetRightVectorAtTime_ReturnValue; // 0x7c
        FVector CallFunc_GetLocationAtTime_ReturnValue; // 0x88
        FVector CallFunc_VLerp_ReturnValue; // 0x94
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0xa0
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x128
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x134
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0x140
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x14c
        FRotator CallFunc_FindLookAtRotation_ReturnValue_1; // 0x1d4
        FRotator CallFunc_RLerp_ReturnValue; // 0x1e0
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1; // 0x1ec
    }; // Size: 0x274
    Params_SetSplineCam params{};
    params.Time = (float)Time;
    params.CallFunc_GetWorldDeltaSeconds_ReturnValue = (float)CallFunc_GetWorldDeltaSeconds_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = (float)CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_InverseTransformLocation_ReturnValue = (FVector)CallFunc_InverseTransformLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_GetRightVectorAtTime_ReturnValue = (FVector)CallFunc_GetRightVectorAtTime_ReturnValue;
    params.CallFunc_GetLocationAtTime_ReturnValue = (FVector)CallFunc_GetLocationAtTime_ReturnValue;
    params.CallFunc_VLerp_ReturnValue = (FVector)CallFunc_VLerp_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_FindLookAtRotation_ReturnValue_1 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_1;
    params.CallFunc_RLerp_ReturnValue = (FRotator)CallFunc_RLerp_ReturnValue;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::SetSplineCam_Test(float Time, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetRightVectorAtTime_ReturnValue, FVector CallFunc_GetLocationAtTime_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.SetSplineCam_Test"));
    struct Params_SetSplineCam_Test {
        float Time; // 0x0
        char pad_4[0x4];
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x8
        FTransform CallFunc_GetTransform_ReturnValue; // 0x10
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x40
        bool CallFunc_IsValid_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FVector CallFunc_InverseTransformLocation_ReturnValue; // 0x50
        bool CallFunc_Not_PreBool_ReturnValue; // 0x5c
        char pad_5d[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x60
        FVector CallFunc_GetRightVectorAtTime_ReturnValue; // 0x6c
        FVector CallFunc_GetLocationAtTime_ReturnValue; // 0x78
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x84
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x10c
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x118
        FVector CallFunc_Add_VectorVector_ReturnValue_2; // 0x124
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x130
        FRotator CallFunc_FindLookAtRotation_ReturnValue_1; // 0x1b8
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1; // 0x1c4
    }; // Size: 0x24c
    Params_SetSplineCam_Test params{};
    params.Time = (float)Time;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_InverseTransformLocation_ReturnValue = (FVector)CallFunc_InverseTransformLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_GetRightVectorAtTime_ReturnValue = (FVector)CallFunc_GetRightVectorAtTime_ReturnValue;
    params.CallFunc_GetLocationAtTime_ReturnValue = (FVector)CallFunc_GetLocationAtTime_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue_2 = (FVector)CallFunc_Add_VectorVector_ReturnValue_2;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_FindLookAtRotation_ReturnValue_1 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_1;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::SetBlend(float Alpha, FVector CallFunc_VLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FVector CallFunc_VLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.SetBlend"));
    struct Params_SetBlend {
        float Alpha; // 0x0
        FVector CallFunc_VLerp_ReturnValue; // 0x4
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x10
        FVector CallFunc_VLerp_ReturnValue_1; // 0x98
        float CallFunc_Lerp_ReturnValue; // 0xa4
    }; // Size: 0xa8
    Params_SetBlend params{};
    params.Alpha = (float)Alpha;
    params.CallFunc_VLerp_ReturnValue = (FVector)CallFunc_VLerp_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_VLerp_ReturnValue_1 = (FVector)CallFunc_VLerp_ReturnValue_1;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::SetTarget(FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.SetTarget"));
    struct Params_SetTarget {
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0xc
        char pad_d[0x3];
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x10
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_1; // 0x18
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x24
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x30
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x3c
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult; // 0x48
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0xd0
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0xdc
    }; // Size: 0x164
    Params_SetTarget params{};
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::UserConstructionScript0(FTransform Temp_struct_Variable, FTransform CallFunc_MakeTransform_ReturnValue, UBillboardComponent* CallFunc_AddComponent_ReturnValue, UCineCameraComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32_t CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FTransform Temp_struct_Variable; // 0x0
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x30
        UBillboardComponent* CallFunc_AddComponent_ReturnValue; // 0x60
        UCineCameraComponent* CallFunc_AddComponent_ReturnValue_1; // 0x68
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x70
        char pad_71[0x3];
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x74
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x80
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x8c
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x114
        char pad_115[0x3];
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x118
        bool CallFunc_IsValid_ReturnValue; // 0x120
        char pad_121[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_1; // 0x124
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x130
        bool K2Node_SwitchEnum_CmpSuccess; // 0x134
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x135
        bool CallFunc_Not_PreBool_ReturnValue; // 0x136
    }; // Size: 0x137
    Params_UserConstructionScript params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (UBillboardComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue_1 = (UCineCameraComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_1;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::Timeline_2__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.Timeline_2__FinishedFunc"));
    struct Params_Timeline_2__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_2__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::Timeline_2__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.Timeline_2__UpdateFunc"));
    struct Params_Timeline_2__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_2__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::MoveDissalow() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.MoveDissalow"));
    struct Params_MoveDissalow {
    }; // Size: 0x0
    Params_MoveDissalow params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::MoveDissalow2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.MoveDissalow2"));
    struct Params_MoveDissalow2 {
    }; // Size: 0x0
    Params_MoveDissalow2 params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::CamStart__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.CamStart__DelegateSignature"));
    struct Params_CamStart__DelegateSignature {
    }; // Size: 0x0
    Params_CamStart__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_CutCam_C::CamFinished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_CutCam.BP_CutCam_C.CamFinished__DelegateSignature"));
    struct Params_CamFinished__DelegateSignature {
    }; // Size: 0x0
    Params_CamFinished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
