#include "AActor.hpp"
#include "ABP_TransfigurationMovementStyle_Base_C.hpp"
#include "ABP_TransfigurationMovementStyle_DefaultGround_C.hpp"
#include "ABP_TransfigurationPreviewActor_C.hpp"
#include "ABP_TransfigurationPreviewPlacementAnimator_C.hpp"
#include "APlayerCameraManager.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_PreviewActorState\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UABP_TransfigurationPlaceDown_C.hpp"
#include "UAnimInstance.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_TransfigurationMovementStyle_DefaultGround_C::Update_Decals_Visibility(bool CanPlace, E_PreviewActorState::Type PreviewActorState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, ABP_TransfigurationPreviewActor_C* K2Node_DynamicCast_AsBP_Transfiguration_Preview_Actor, bool K2Node_DynamicCast_bSuccess, UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.Update Decals Visibility"));
    struct Params_Update_Decals_Visibility {
        bool CanPlace; // 0x0
        E_PreviewActorState::Type PreviewActorState; // 0x1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x3
        bool CallFunc_BooleanOR_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x6
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x7
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x7];
        ABP_TransfigurationPreviewActor_C* K2Node_DynamicCast_AsBP_Transfiguration_Preview_Actor; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue; // 0x20
        UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue_1; // 0x28
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x30
        bool CallFunc_NotEqual_ObjectObject_ReturnValue_1; // 0x31
        bool CallFunc_EqualEqual_BoolBool_ReturnValue; // 0x32
    }; // Size: 0x33
    Params_Update_Decals_Visibility params{};
    params.CanPlace = (bool)CanPlace;
    params.PreviewActorState = (E_PreviewActorState::Type)PreviewActorState;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Transfiguration_Preview_Actor = (ABP_TransfigurationPreviewActor_C*)K2Node_DynamicCast_AsBP_Transfiguration_Preview_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetDecalMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetDecalMaterial_ReturnValue;
    params.CallFunc_GetDecalMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetDecalMaterial_ReturnValue_1;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_EqualEqual_BoolBool_ReturnValue = (bool)CallFunc_EqualEqual_BoolBool_ReturnValue;
    ProcessEvent(func, &params);
}
ABP_TransfigurationMovementStyle_DefaultGround_C* ABP_TransfigurationMovementStyle_DefaultGround_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C");
    return (ABP_TransfigurationMovementStyle_DefaultGround_C*)res;
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::SetWallTransformFromBounds(FVector& LocalExtent, FVector& LocalLocation, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FRotator CallFunc_MakeRotator_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, FRotator CallFunc_MakeRotator_ReturnValue_3, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FVector CallFunc_GetCameraLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue_2, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2, FRotator CallFunc_FindLookAtRotation_ReturnValue_3, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_3, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, FRotator CallFunc_MakeRotator_ReturnValue_4, FRotator CallFunc_MakeRotator_ReturnValue_5, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_4, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_5, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_BreakVector_X_6, float CallFunc_BreakVector_Y_6, float CallFunc_BreakVector_Z_6, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, float CallFunc_BreakRotator_Roll_6, float CallFunc_BreakRotator_Pitch_6, float CallFunc_BreakRotator_Yaw_6, FRotator CallFunc_MakeRotator_ReturnValue_6, float CallFunc_BreakVector_X_7, float CallFunc_BreakVector_Y_7, float CallFunc_BreakVector_Z_7, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_6, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, FVector CallFunc_GetCameraLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_7, float CallFunc_BreakRotator_Pitch_7, float CallFunc_BreakRotator_Yaw_7, FRotator CallFunc_FindLookAtRotation_ReturnValue_4, FRotator CallFunc_MakeRotator_ReturnValue_7, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_4, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_7, FRotator CallFunc_FindLookAtRotation_ReturnValue_5, FRotator CallFunc_FindLookAtRotation_ReturnValue_6, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_5, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_6, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, FRotator CallFunc_FindLookAtRotation_ReturnValue_7, float CallFunc_BreakVector_X_8, float CallFunc_BreakVector_Y_8, float CallFunc_BreakVector_Z_8, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_7, int32_t Temp_int_Variable, USceneComponent* CallFunc_Array_Get_Item, float CallFunc_BreakVector_X_9, float CallFunc_BreakVector_Y_9, float CallFunc_BreakVector_Z_9, float CallFunc_Subtract_FloatFloat_ReturnValue_2, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_3, FVector K2Node_MathExpression_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_BreakVector_X_10, float CallFunc_BreakVector_Y_10, float CallFunc_BreakVector_Z_10, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, FVector CallFunc_MakeVector_ReturnValue_5, FVector CallFunc_MakeVector_ReturnValue_6, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_6, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector K2Node_MathExpression_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_7, float CallFunc_BreakVector_X_11, float CallFunc_BreakVector_Y_11, float CallFunc_BreakVector_Z_11, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_7, FVector CallFunc_MakeVector_ReturnValue_8, FVector CallFunc_MakeVector_ReturnValue_9, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_8, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_Vector_Up_ReturnValue, FTransform CallFunc_GetTargetTransform_ReturnValue, FRotator CallFunc_MakeRotFromYZ_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_TransformLocation_ReturnValue, FVector CallFunc_Multiply_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_BreakVector_X_12, float CallFunc_BreakVector_Y_12, float CallFunc_BreakVector_Z_12, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_10) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.SetWallTransformFromBounds"));
    struct Params_SetWallTransformFromBounds {
        FVector LocalExtent; // 0x0
        FVector LocalLocation; // 0xc
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x1c
        float CallFunc_BreakRotator_Roll; // 0x20
        float CallFunc_BreakRotator_Pitch; // 0x24
        float CallFunc_BreakRotator_Yaw; // 0x28
        float CallFunc_BreakRotator_Roll_1; // 0x2c
        float CallFunc_BreakRotator_Pitch_1; // 0x30
        float CallFunc_BreakRotator_Yaw_1; // 0x34
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x38
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x44
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x50
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1; // 0xd8
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x160
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_1; // 0x16c
        float CallFunc_BreakVector_X; // 0x178
        float CallFunc_BreakVector_Y; // 0x17c
        float CallFunc_BreakVector_Z; // 0x180
        float CallFunc_BreakVector_X_1; // 0x184
        float CallFunc_BreakVector_Y_1; // 0x188
        float CallFunc_BreakVector_Z_1; // 0x18c
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_2; // 0x190
        float CallFunc_BreakRotator_Roll_2; // 0x19c
        float CallFunc_BreakRotator_Pitch_2; // 0x1a0
        float CallFunc_BreakRotator_Yaw_2; // 0x1a4
        FRotator CallFunc_MakeRotator_ReturnValue_2; // 0x1a8
        float CallFunc_BreakVector_X_2; // 0x1b4
        float CallFunc_BreakVector_Y_2; // 0x1b8
        float CallFunc_BreakVector_Z_2; // 0x1bc
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_2; // 0x1c0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_3; // 0x248
        float CallFunc_BreakRotator_Roll_3; // 0x254
        float CallFunc_BreakRotator_Pitch_3; // 0x258
        float CallFunc_BreakRotator_Yaw_3; // 0x25c
        FRotator CallFunc_MakeRotator_ReturnValue_3; // 0x260
        float CallFunc_BreakVector_X_3; // 0x26c
        float CallFunc_BreakVector_Y_3; // 0x270
        float CallFunc_BreakVector_Z_3; // 0x274
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_3; // 0x278
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x300
        FVector CallFunc_GetCameraLocation_ReturnValue; // 0x308
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x314
        float CallFunc_BreakVector_X_4; // 0x320
        float CallFunc_BreakVector_Y_4; // 0x324
        float CallFunc_BreakVector_Z_4; // 0x328
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult; // 0x32c
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x3b4
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0x3b8
        FVector CallFunc_MakeVector_ReturnValue; // 0x3bc
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x3c8
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x3d4
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x45c
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x4e4
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x4e8
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x4ec
        FVector CallFunc_MakeVector_ReturnValue_3; // 0x4f8
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2; // 0x504
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3; // 0x58c
        FRotator CallFunc_FindLookAtRotation_ReturnValue_1; // 0x614
        FRotator CallFunc_FindLookAtRotation_ReturnValue_2; // 0x620
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1; // 0x62c
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2; // 0x6b4
        FRotator CallFunc_FindLookAtRotation_ReturnValue_3; // 0x73c
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_3; // 0x748
        float CallFunc_BreakRotator_Roll_4; // 0x7d0
        float CallFunc_BreakRotator_Pitch_4; // 0x7d4
        float CallFunc_BreakRotator_Yaw_4; // 0x7d8
        float CallFunc_BreakRotator_Roll_5; // 0x7dc
        float CallFunc_BreakRotator_Pitch_5; // 0x7e0
        float CallFunc_BreakRotator_Yaw_5; // 0x7e4
        FRotator CallFunc_MakeRotator_ReturnValue_4; // 0x7e8
        FRotator CallFunc_MakeRotator_ReturnValue_5; // 0x7f4
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_4; // 0x800
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_5; // 0x888
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_4; // 0x910
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_5; // 0x91c
        float CallFunc_BreakVector_X_5; // 0x928
        float CallFunc_BreakVector_Y_5; // 0x92c
        float CallFunc_BreakVector_Z_5; // 0x930
        float CallFunc_BreakVector_X_6; // 0x934
        float CallFunc_BreakVector_Y_6; // 0x938
        float CallFunc_BreakVector_Z_6; // 0x93c
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_6; // 0x940
        float CallFunc_BreakRotator_Roll_6; // 0x94c
        float CallFunc_BreakRotator_Pitch_6; // 0x950
        float CallFunc_BreakRotator_Yaw_6; // 0x954
        FRotator CallFunc_MakeRotator_ReturnValue_6; // 0x958
        float CallFunc_BreakVector_X_7; // 0x964
        float CallFunc_BreakVector_Y_7; // 0x968
        float CallFunc_BreakVector_Z_7; // 0x96c
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_6; // 0x970
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1; // 0x9f8
        FVector CallFunc_GetCameraLocation_ReturnValue_1; // 0xa00
        float CallFunc_BreakRotator_Roll_7; // 0xa0c
        float CallFunc_BreakRotator_Pitch_7; // 0xa10
        float CallFunc_BreakRotator_Yaw_7; // 0xa14
        FRotator CallFunc_FindLookAtRotation_ReturnValue_4; // 0xa18
        FRotator CallFunc_MakeRotator_ReturnValue_7; // 0xa24
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_4; // 0xa30
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_7; // 0xab8
        FRotator CallFunc_FindLookAtRotation_ReturnValue_5; // 0xb40
        FRotator CallFunc_FindLookAtRotation_ReturnValue_6; // 0xb4c
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_5; // 0xb58
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_6; // 0xbe0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_7; // 0xc68
        FRotator CallFunc_FindLookAtRotation_ReturnValue_7; // 0xc74
        float CallFunc_BreakVector_X_8; // 0xc80
        float CallFunc_BreakVector_Y_8; // 0xc84
        float CallFunc_BreakVector_Z_8; // 0xc88
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_7; // 0xc8c
        int32_t Temp_int_Variable; // 0xd14
        USceneComponent* CallFunc_Array_Get_Item; // 0xd18
        float CallFunc_BreakVector_X_9; // 0xd20
        float CallFunc_BreakVector_Y_9; // 0xd24
        float CallFunc_BreakVector_Z_9; // 0xd28
        float CallFunc_Subtract_FloatFloat_ReturnValue_2; // 0xd2c
        FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0xd30
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0xd3c
        FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0xd40
        float CallFunc_Subtract_FloatFloat_ReturnValue_3; // 0xd4c
        FVector K2Node_MathExpression_ReturnValue; // 0xd50
        FVector CallFunc_MakeVector_ReturnValue_4; // 0xd5c
        float CallFunc_BreakVector_X_10; // 0xd68
        float CallFunc_BreakVector_Y_10; // 0xd6c
        float CallFunc_BreakVector_Z_10; // 0xd70
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4; // 0xd74
        FVector CallFunc_MakeVector_ReturnValue_5; // 0xdfc
        FVector CallFunc_MakeVector_ReturnValue_6; // 0xe08
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5; // 0xe14
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_6; // 0xe9c
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0xf24
        FVector K2Node_MathExpression_ReturnValue_1; // 0xf28
        FVector CallFunc_MakeVector_ReturnValue_7; // 0xf34
        float CallFunc_BreakVector_X_11; // 0xf40
        float CallFunc_BreakVector_Y_11; // 0xf44
        float CallFunc_BreakVector_Z_11; // 0xf48
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_7; // 0xf4c
        FVector CallFunc_MakeVector_ReturnValue_8; // 0xfd4
        FVector CallFunc_MakeVector_ReturnValue_9; // 0xfe0
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_8; // 0xfec
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x1074
        char pad_1075[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1078
        FVector CallFunc_Vector_Up_ReturnValue; // 0x107c
        char pad_1088[0x8];
        FTransform CallFunc_GetTargetTransform_ReturnValue; // 0x1090
        FRotator CallFunc_MakeRotFromYZ_ReturnValue; // 0x10c0
        FVector CallFunc_BreakTransform_Location; // 0x10cc
        FRotator CallFunc_BreakTransform_Rotation; // 0x10d8
        FVector CallFunc_BreakTransform_Scale; // 0x10e4
        FVector CallFunc_TransformLocation_ReturnValue; // 0x10f0
        FVector CallFunc_Multiply_VectorVector_ReturnValue; // 0x10fc
        char pad_1108[0x8];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x1110
        float CallFunc_BreakVector_X_12; // 0x1140
        float CallFunc_BreakVector_Y_12; // 0x1144
        float CallFunc_BreakVector_Z_12; // 0x1148
        FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult; // 0x114c
        float CallFunc_Abs_ReturnValue; // 0x11d4
        float CallFunc_Abs_ReturnValue_1; // 0x11d8
        FVector CallFunc_MakeVector_ReturnValue_10; // 0x11dc
    }; // Size: 0x11e8
    Params_SetWallTransformFromBounds params{};
    params.LocalExtent = (FVector)LocalExtent;
    params.LocalLocation = (FVector)LocalLocation;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_1;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_2;
    params.CallFunc_BreakRotator_Roll_2 = (float)CallFunc_BreakRotator_Roll_2;
    params.CallFunc_BreakRotator_Pitch_2 = (float)CallFunc_BreakRotator_Pitch_2;
    params.CallFunc_BreakRotator_Yaw_2 = (float)CallFunc_BreakRotator_Yaw_2;
    params.CallFunc_MakeRotator_ReturnValue_2 = (FRotator)CallFunc_MakeRotator_ReturnValue_2;
    params.CallFunc_BreakVector_X_2 = (float)CallFunc_BreakVector_X_2;
    params.CallFunc_BreakVector_Y_2 = (float)CallFunc_BreakVector_Y_2;
    params.CallFunc_BreakVector_Z_2 = (float)CallFunc_BreakVector_Z_2;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_3 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_3;
    params.CallFunc_BreakRotator_Roll_3 = (float)CallFunc_BreakRotator_Roll_3;
    params.CallFunc_BreakRotator_Pitch_3 = (float)CallFunc_BreakRotator_Pitch_3;
    params.CallFunc_BreakRotator_Yaw_3 = (float)CallFunc_BreakRotator_Yaw_3;
    params.CallFunc_MakeRotator_ReturnValue_3 = (FRotator)CallFunc_MakeRotator_ReturnValue_3;
    params.CallFunc_BreakVector_X_3 = (float)CallFunc_BreakVector_X_3;
    params.CallFunc_BreakVector_Y_3 = (float)CallFunc_BreakVector_Y_3;
    params.CallFunc_BreakVector_Z_3 = (float)CallFunc_BreakVector_Z_3;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_GetCameraLocation_ReturnValue = (FVector)CallFunc_GetCameraLocation_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_BreakVector_X_4 = (float)CallFunc_BreakVector_X_4;
    params.CallFunc_BreakVector_Y_4 = (float)CallFunc_BreakVector_Y_4;
    params.CallFunc_BreakVector_Z_4 = (float)CallFunc_BreakVector_Z_4;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    params.CallFunc_MakeVector_ReturnValue_3 = (FVector)CallFunc_MakeVector_ReturnValue_3;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_3 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
    params.CallFunc_FindLookAtRotation_ReturnValue_1 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue_2 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_2;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_1;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_2;
    params.CallFunc_FindLookAtRotation_ReturnValue_3 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_3;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_3 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_3;
    params.CallFunc_BreakRotator_Roll_4 = (float)CallFunc_BreakRotator_Roll_4;
    params.CallFunc_BreakRotator_Pitch_4 = (float)CallFunc_BreakRotator_Pitch_4;
    params.CallFunc_BreakRotator_Yaw_4 = (float)CallFunc_BreakRotator_Yaw_4;
    params.CallFunc_BreakRotator_Roll_5 = (float)CallFunc_BreakRotator_Roll_5;
    params.CallFunc_BreakRotator_Pitch_5 = (float)CallFunc_BreakRotator_Pitch_5;
    params.CallFunc_BreakRotator_Yaw_5 = (float)CallFunc_BreakRotator_Yaw_5;
    params.CallFunc_MakeRotator_ReturnValue_4 = (FRotator)CallFunc_MakeRotator_ReturnValue_4;
    params.CallFunc_MakeRotator_ReturnValue_5 = (FRotator)CallFunc_MakeRotator_ReturnValue_5;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_4 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_4;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_5 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_5;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_4 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_4;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_5 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_5;
    params.CallFunc_BreakVector_X_5 = (float)CallFunc_BreakVector_X_5;
    params.CallFunc_BreakVector_Y_5 = (float)CallFunc_BreakVector_Y_5;
    params.CallFunc_BreakVector_Z_5 = (float)CallFunc_BreakVector_Z_5;
    params.CallFunc_BreakVector_X_6 = (float)CallFunc_BreakVector_X_6;
    params.CallFunc_BreakVector_Y_6 = (float)CallFunc_BreakVector_Y_6;
    params.CallFunc_BreakVector_Z_6 = (float)CallFunc_BreakVector_Z_6;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_6 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_6;
    params.CallFunc_BreakRotator_Roll_6 = (float)CallFunc_BreakRotator_Roll_6;
    params.CallFunc_BreakRotator_Pitch_6 = (float)CallFunc_BreakRotator_Pitch_6;
    params.CallFunc_BreakRotator_Yaw_6 = (float)CallFunc_BreakRotator_Yaw_6;
    params.CallFunc_MakeRotator_ReturnValue_6 = (FRotator)CallFunc_MakeRotator_ReturnValue_6;
    params.CallFunc_BreakVector_X_7 = (float)CallFunc_BreakVector_X_7;
    params.CallFunc_BreakVector_Y_7 = (float)CallFunc_BreakVector_Y_7;
    params.CallFunc_BreakVector_Z_7 = (float)CallFunc_BreakVector_Z_7;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_6 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_6;
    params.CallFunc_GetPlayerCameraManager_ReturnValue_1 = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue_1;
    params.CallFunc_GetCameraLocation_ReturnValue_1 = (FVector)CallFunc_GetCameraLocation_ReturnValue_1;
    params.CallFunc_BreakRotator_Roll_7 = (float)CallFunc_BreakRotator_Roll_7;
    params.CallFunc_BreakRotator_Pitch_7 = (float)CallFunc_BreakRotator_Pitch_7;
    params.CallFunc_BreakRotator_Yaw_7 = (float)CallFunc_BreakRotator_Yaw_7;
    params.CallFunc_FindLookAtRotation_ReturnValue_4 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_4;
    params.CallFunc_MakeRotator_ReturnValue_7 = (FRotator)CallFunc_MakeRotator_ReturnValue_7;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_4 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_4;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_7 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_7;
    params.CallFunc_FindLookAtRotation_ReturnValue_5 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_5;
    params.CallFunc_FindLookAtRotation_ReturnValue_6 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_6;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_5 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_5;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_6 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_6;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_7 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_7;
    params.CallFunc_FindLookAtRotation_ReturnValue_7 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_7;
    params.CallFunc_BreakVector_X_8 = (float)CallFunc_BreakVector_X_8;
    params.CallFunc_BreakVector_Y_8 = (float)CallFunc_BreakVector_Y_8;
    params.CallFunc_BreakVector_Z_8 = (float)CallFunc_BreakVector_Z_8;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_7 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_7;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_BreakVector_X_9 = (float)CallFunc_BreakVector_X_9;
    params.CallFunc_BreakVector_Y_9 = (float)CallFunc_BreakVector_Y_9;
    params.CallFunc_BreakVector_Z_9 = (float)CallFunc_BreakVector_Z_9;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_2 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_2;
    params.CallFunc_GreaterGreater_VectorRotator_ReturnValue = (FVector)CallFunc_GreaterGreater_VectorRotator_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = (FVector)CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_3 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_3;
    params.K2Node_MathExpression_ReturnValue = (FVector)K2Node_MathExpression_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_4 = (FVector)CallFunc_MakeVector_ReturnValue_4;
    params.CallFunc_BreakVector_X_10 = (float)CallFunc_BreakVector_X_10;
    params.CallFunc_BreakVector_Y_10 = (float)CallFunc_BreakVector_Y_10;
    params.CallFunc_BreakVector_Z_10 = (float)CallFunc_BreakVector_Z_10;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_4 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_4;
    params.CallFunc_MakeVector_ReturnValue_5 = (FVector)CallFunc_MakeVector_ReturnValue_5;
    params.CallFunc_MakeVector_ReturnValue_6 = (FVector)CallFunc_MakeVector_ReturnValue_6;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_5 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_5;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_6 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_6;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.K2Node_MathExpression_ReturnValue_1 = (FVector)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_7 = (FVector)CallFunc_MakeVector_ReturnValue_7;
    params.CallFunc_BreakVector_X_11 = (float)CallFunc_BreakVector_X_11;
    params.CallFunc_BreakVector_Y_11 = (float)CallFunc_BreakVector_Y_11;
    params.CallFunc_BreakVector_Z_11 = (float)CallFunc_BreakVector_Z_11;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_7 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_7;
    params.CallFunc_MakeVector_ReturnValue_8 = (FVector)CallFunc_MakeVector_ReturnValue_8;
    params.CallFunc_MakeVector_ReturnValue_9 = (FVector)CallFunc_MakeVector_ReturnValue_9;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_8 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_8;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Vector_Up_ReturnValue = (FVector)CallFunc_Vector_Up_ReturnValue;
    params.CallFunc_GetTargetTransform_ReturnValue = (FTransform)CallFunc_GetTargetTransform_ReturnValue;
    params.CallFunc_MakeRotFromYZ_ReturnValue = (FRotator)CallFunc_MakeRotFromYZ_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_TransformLocation_ReturnValue = (FVector)CallFunc_TransformLocation_ReturnValue;
    params.CallFunc_Multiply_VectorVector_ReturnValue = (FVector)CallFunc_Multiply_VectorVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_BreakVector_X_12 = (float)CallFunc_BreakVector_X_12;
    params.CallFunc_BreakVector_Y_12 = (float)CallFunc_BreakVector_Y_12;
    params.CallFunc_BreakVector_Z_12 = (float)CallFunc_BreakVector_Z_12;
    params.CallFunc_K2_SetWorldTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldTransform_SweepHitResult;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_10 = (FVector)CallFunc_MakeVector_ReturnValue_10;
    ProcessEvent(func, &params);
    LocalExtent = params.LocalExtent;
    LocalLocation = params.LocalLocation;
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::SetTransformFromBounds(FVector& LocalExtent, FVector& LocalLocation, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FVector CallFunc_GetCameraLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3, FRotator CallFunc_MakeRotator_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue_2, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FRotator CallFunc_FindLookAtRotation_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2, FRotator CallFunc_MakeRotator_ReturnValue_3, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_5, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_BreakVector_X_6, float CallFunc_BreakVector_Y_6, float CallFunc_BreakVector_Z_6, FVector CallFunc_K2_GetComponentLocation_ReturnValue_6, FVector CallFunc_K2_GetComponentLocation_ReturnValue_7, float CallFunc_BreakVector_X_7, float CallFunc_BreakVector_Y_7, float CallFunc_BreakVector_Z_7, float CallFunc_BreakVector_X_8, float CallFunc_BreakVector_Y_8, float CallFunc_BreakVector_Z_8, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, int32_t Temp_int_Variable, FVector CallFunc_GetCameraLocation_ReturnValue_1, USceneComponent* CallFunc_Array_Get_Item, FRotator CallFunc_FindLookAtRotation_ReturnValue_4, FRotator CallFunc_FindLookAtRotation_ReturnValue_5, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, FRotator CallFunc_MakeRotator_ReturnValue_4, FRotator CallFunc_MakeRotator_ReturnValue_5, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_4, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_5, FRotator CallFunc_FindLookAtRotation_ReturnValue_6, FRotator CallFunc_FindLookAtRotation_ReturnValue_7, float CallFunc_BreakRotator_Roll_6, float CallFunc_BreakRotator_Pitch_6, float CallFunc_BreakRotator_Yaw_6, float CallFunc_BreakRotator_Roll_7, float CallFunc_BreakRotator_Pitch_7, float CallFunc_BreakRotator_Yaw_7, FRotator CallFunc_MakeRotator_ReturnValue_6, FRotator CallFunc_MakeRotator_ReturnValue_7, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_6, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_7, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, FVector K2Node_MathExpression_ReturnValue, float CallFunc_BreakVector_X_9, float CallFunc_BreakVector_Y_9, float CallFunc_BreakVector_Z_9, FVector K2Node_MathExpression_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_4, float CallFunc_BreakVector_X_10, float CallFunc_BreakVector_Y_10, float CallFunc_BreakVector_Z_10, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4, FVector CallFunc_MakeVector_ReturnValue_5, float CallFunc_BreakVector_X_11, float CallFunc_BreakVector_Y_11, float CallFunc_BreakVector_Z_11, float CallFunc_Subtract_FloatFloat_ReturnValue_2, FTransform CallFunc_GetTargetTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_TransformLocation_ReturnValue, FVector CallFunc_Multiply_VectorVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, float CallFunc_BreakVector_X_12, float CallFunc_BreakVector_Y_12, float CallFunc_BreakVector_Z_12, float CallFunc_Abs_ReturnValue, FRotator CallFunc_MakeRotFromZY_ReturnValue, float CallFunc_Abs_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_6, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_7, FVector CallFunc_MakeVector_ReturnValue_8, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_6, FVector CallFunc_MakeVector_ReturnValue_9, FVector CallFunc_MakeVector_ReturnValue_10, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_7, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.SetTransformFromBounds"));
    struct Params_SetTransformFromBounds {
        FVector LocalExtent; // 0x0
        FVector LocalLocation; // 0xc
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x1c
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x20
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_1; // 0x2c
        float CallFunc_BreakVector_X; // 0x38
        float CallFunc_BreakVector_Y; // 0x3c
        float CallFunc_BreakVector_Z; // 0x40
        float CallFunc_BreakVector_X_1; // 0x44
        float CallFunc_BreakVector_Y_1; // 0x48
        float CallFunc_BreakVector_Z_1; // 0x4c
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_2; // 0x50
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_3; // 0x5c
        float CallFunc_BreakVector_X_2; // 0x68
        float CallFunc_BreakVector_Y_2; // 0x6c
        float CallFunc_BreakVector_Z_2; // 0x70
        float CallFunc_BreakVector_X_3; // 0x74
        float CallFunc_BreakVector_Y_3; // 0x78
        float CallFunc_BreakVector_Z_3; // 0x7c
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x80
        FVector CallFunc_GetCameraLocation_ReturnValue; // 0x88
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x94
        float CallFunc_BreakVector_X_4; // 0xa0
        float CallFunc_BreakVector_Y_4; // 0xa4
        float CallFunc_BreakVector_Z_4; // 0xa8
        float CallFunc_BreakRotator_Roll; // 0xac
        float CallFunc_BreakRotator_Pitch; // 0xb0
        float CallFunc_BreakRotator_Yaw; // 0xb4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0xb8
        FRotator CallFunc_MakeRotator_ReturnValue; // 0xbc
        FVector CallFunc_MakeVector_ReturnValue; // 0xc8
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult; // 0xd4
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x15c
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x1e4
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0x1e8
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x1ec
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x1f8
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x204
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2; // 0x28c
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x314
        FRotator CallFunc_FindLookAtRotation_ReturnValue_1; // 0x318
        FVector CallFunc_MakeVector_ReturnValue_3; // 0x324
        float CallFunc_BreakRotator_Roll_1; // 0x330
        float CallFunc_BreakRotator_Pitch_1; // 0x334
        float CallFunc_BreakRotator_Yaw_1; // 0x338
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3; // 0x33c
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x3c4
        FRotator CallFunc_FindLookAtRotation_ReturnValue_2; // 0x3d0
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_1; // 0x3dc
        float CallFunc_BreakRotator_Roll_2; // 0x464
        float CallFunc_BreakRotator_Pitch_2; // 0x468
        float CallFunc_BreakRotator_Yaw_2; // 0x46c
        FRotator CallFunc_FindLookAtRotation_ReturnValue_3; // 0x470
        FRotator CallFunc_MakeRotator_ReturnValue_2; // 0x47c
        float CallFunc_BreakRotator_Roll_3; // 0x488
        float CallFunc_BreakRotator_Pitch_3; // 0x48c
        float CallFunc_BreakRotator_Yaw_3; // 0x490
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_2; // 0x494
        FRotator CallFunc_MakeRotator_ReturnValue_3; // 0x51c
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_3; // 0x528
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_4; // 0x5b0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_5; // 0x5bc
        float CallFunc_BreakVector_X_5; // 0x5c8
        float CallFunc_BreakVector_Y_5; // 0x5cc
        float CallFunc_BreakVector_Z_5; // 0x5d0
        float CallFunc_BreakVector_X_6; // 0x5d4
        float CallFunc_BreakVector_Y_6; // 0x5d8
        float CallFunc_BreakVector_Z_6; // 0x5dc
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_6; // 0x5e0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue_7; // 0x5ec
        float CallFunc_BreakVector_X_7; // 0x5f8
        float CallFunc_BreakVector_Y_7; // 0x5fc
        float CallFunc_BreakVector_Z_7; // 0x600
        float CallFunc_BreakVector_X_8; // 0x604
        float CallFunc_BreakVector_Y_8; // 0x608
        float CallFunc_BreakVector_Z_8; // 0x60c
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1; // 0x610
        int32_t Temp_int_Variable; // 0x618
        FVector CallFunc_GetCameraLocation_ReturnValue_1; // 0x61c
        USceneComponent* CallFunc_Array_Get_Item; // 0x628
        FRotator CallFunc_FindLookAtRotation_ReturnValue_4; // 0x630
        FRotator CallFunc_FindLookAtRotation_ReturnValue_5; // 0x63c
        float CallFunc_BreakRotator_Roll_4; // 0x648
        float CallFunc_BreakRotator_Pitch_4; // 0x64c
        float CallFunc_BreakRotator_Yaw_4; // 0x650
        float CallFunc_BreakRotator_Roll_5; // 0x654
        float CallFunc_BreakRotator_Pitch_5; // 0x658
        float CallFunc_BreakRotator_Yaw_5; // 0x65c
        FRotator CallFunc_MakeRotator_ReturnValue_4; // 0x660
        FRotator CallFunc_MakeRotator_ReturnValue_5; // 0x66c
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_4; // 0x678
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_5; // 0x700
        FRotator CallFunc_FindLookAtRotation_ReturnValue_6; // 0x788
        FRotator CallFunc_FindLookAtRotation_ReturnValue_7; // 0x794
        float CallFunc_BreakRotator_Roll_6; // 0x7a0
        float CallFunc_BreakRotator_Pitch_6; // 0x7a4
        float CallFunc_BreakRotator_Yaw_6; // 0x7a8
        float CallFunc_BreakRotator_Roll_7; // 0x7ac
        float CallFunc_BreakRotator_Pitch_7; // 0x7b0
        float CallFunc_BreakRotator_Yaw_7; // 0x7b4
        FRotator CallFunc_MakeRotator_ReturnValue_6; // 0x7b8
        FRotator CallFunc_MakeRotator_ReturnValue_7; // 0x7c4
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_6; // 0x7d0
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult_7; // 0x858
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x8e0
        char pad_8e1[0x3];
        FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x8e4
        FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue_1; // 0x8f0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8fc
        FVector K2Node_MathExpression_ReturnValue; // 0x900
        float CallFunc_BreakVector_X_9; // 0x90c
        float CallFunc_BreakVector_Y_9; // 0x910
        float CallFunc_BreakVector_Z_9; // 0x914
        FVector K2Node_MathExpression_ReturnValue_1; // 0x918
        FVector CallFunc_MakeVector_ReturnValue_4; // 0x924
        float CallFunc_BreakVector_X_10; // 0x930
        float CallFunc_BreakVector_Y_10; // 0x934
        float CallFunc_BreakVector_Z_10; // 0x938
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_4; // 0x93c
        FVector CallFunc_MakeVector_ReturnValue_5; // 0x9c4
        float CallFunc_BreakVector_X_11; // 0x9d0
        float CallFunc_BreakVector_Y_11; // 0x9d4
        float CallFunc_BreakVector_Z_11; // 0x9d8
        float CallFunc_Subtract_FloatFloat_ReturnValue_2; // 0x9dc
        FTransform CallFunc_GetTargetTransform_ReturnValue; // 0x9e0
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0xa10
        FVector CallFunc_BreakTransform_Location; // 0xa14
        FRotator CallFunc_BreakTransform_Rotation; // 0xa20
        FVector CallFunc_BreakTransform_Scale; // 0xa2c
        FVector CallFunc_TransformLocation_ReturnValue; // 0xa38
        FVector CallFunc_Multiply_VectorVector_ReturnValue; // 0xa44
        FVector CallFunc_GetRightVector_ReturnValue; // 0xa50
        float CallFunc_BreakVector_X_12; // 0xa5c
        float CallFunc_BreakVector_Y_12; // 0xa60
        float CallFunc_BreakVector_Z_12; // 0xa64
        float CallFunc_Abs_ReturnValue; // 0xa68
        FRotator CallFunc_MakeRotFromZY_ReturnValue; // 0xa6c
        float CallFunc_Abs_ReturnValue_1; // 0xa78
        char pad_a7c[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0xa80
        FVector CallFunc_MakeVector_ReturnValue_6; // 0xab0
        FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult; // 0xabc
        float CallFunc_Subtract_FloatFloat_ReturnValue_3; // 0xb44
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0xb48
        FVector CallFunc_MakeVector_ReturnValue_7; // 0xb4c
        FVector CallFunc_MakeVector_ReturnValue_8; // 0xb58
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_5; // 0xb64
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_6; // 0xbec
        FVector CallFunc_MakeVector_ReturnValue_9; // 0xc74
        FVector CallFunc_MakeVector_ReturnValue_10; // 0xc80
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_7; // 0xc8c
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_8; // 0xd14
    }; // Size: 0xd9c
    Params_SetTransformFromBounds params{};
    params.LocalExtent = (FVector)LocalExtent;
    params.LocalLocation = (FVector)LocalLocation;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_1;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_2;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_3 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_3;
    params.CallFunc_BreakVector_X_2 = (float)CallFunc_BreakVector_X_2;
    params.CallFunc_BreakVector_Y_2 = (float)CallFunc_BreakVector_Y_2;
    params.CallFunc_BreakVector_Z_2 = (float)CallFunc_BreakVector_Z_2;
    params.CallFunc_BreakVector_X_3 = (float)CallFunc_BreakVector_X_3;
    params.CallFunc_BreakVector_Y_3 = (float)CallFunc_BreakVector_Y_3;
    params.CallFunc_BreakVector_Z_3 = (float)CallFunc_BreakVector_Z_3;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_GetCameraLocation_ReturnValue = (FVector)CallFunc_GetCameraLocation_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_BreakVector_X_4 = (float)CallFunc_BreakVector_X_4;
    params.CallFunc_BreakVector_Y_4 = (float)CallFunc_BreakVector_Y_4;
    params.CallFunc_BreakVector_Z_4 = (float)CallFunc_BreakVector_Z_4;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue_1 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_3 = (FVector)CallFunc_MakeVector_ReturnValue_3;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_3 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue_2 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_2;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_1;
    params.CallFunc_BreakRotator_Roll_2 = (float)CallFunc_BreakRotator_Roll_2;
    params.CallFunc_BreakRotator_Pitch_2 = (float)CallFunc_BreakRotator_Pitch_2;
    params.CallFunc_BreakRotator_Yaw_2 = (float)CallFunc_BreakRotator_Yaw_2;
    params.CallFunc_FindLookAtRotation_ReturnValue_3 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_3;
    params.CallFunc_MakeRotator_ReturnValue_2 = (FRotator)CallFunc_MakeRotator_ReturnValue_2;
    params.CallFunc_BreakRotator_Roll_3 = (float)CallFunc_BreakRotator_Roll_3;
    params.CallFunc_BreakRotator_Pitch_3 = (float)CallFunc_BreakRotator_Pitch_3;
    params.CallFunc_BreakRotator_Yaw_3 = (float)CallFunc_BreakRotator_Yaw_3;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_2;
    params.CallFunc_MakeRotator_ReturnValue_3 = (FRotator)CallFunc_MakeRotator_ReturnValue_3;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_3 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_3;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_4 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_4;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_5 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_5;
    params.CallFunc_BreakVector_X_5 = (float)CallFunc_BreakVector_X_5;
    params.CallFunc_BreakVector_Y_5 = (float)CallFunc_BreakVector_Y_5;
    params.CallFunc_BreakVector_Z_5 = (float)CallFunc_BreakVector_Z_5;
    params.CallFunc_BreakVector_X_6 = (float)CallFunc_BreakVector_X_6;
    params.CallFunc_BreakVector_Y_6 = (float)CallFunc_BreakVector_Y_6;
    params.CallFunc_BreakVector_Z_6 = (float)CallFunc_BreakVector_Z_6;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_6 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_6;
    params.CallFunc_K2_GetComponentLocation_ReturnValue_7 = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue_7;
    params.CallFunc_BreakVector_X_7 = (float)CallFunc_BreakVector_X_7;
    params.CallFunc_BreakVector_Y_7 = (float)CallFunc_BreakVector_Y_7;
    params.CallFunc_BreakVector_Z_7 = (float)CallFunc_BreakVector_Z_7;
    params.CallFunc_BreakVector_X_8 = (float)CallFunc_BreakVector_X_8;
    params.CallFunc_BreakVector_Y_8 = (float)CallFunc_BreakVector_Y_8;
    params.CallFunc_BreakVector_Z_8 = (float)CallFunc_BreakVector_Z_8;
    params.CallFunc_GetPlayerCameraManager_ReturnValue_1 = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_GetCameraLocation_ReturnValue_1 = (FVector)CallFunc_GetCameraLocation_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_FindLookAtRotation_ReturnValue_4 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_4;
    params.CallFunc_FindLookAtRotation_ReturnValue_5 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_5;
    params.CallFunc_BreakRotator_Roll_4 = (float)CallFunc_BreakRotator_Roll_4;
    params.CallFunc_BreakRotator_Pitch_4 = (float)CallFunc_BreakRotator_Pitch_4;
    params.CallFunc_BreakRotator_Yaw_4 = (float)CallFunc_BreakRotator_Yaw_4;
    params.CallFunc_BreakRotator_Roll_5 = (float)CallFunc_BreakRotator_Roll_5;
    params.CallFunc_BreakRotator_Pitch_5 = (float)CallFunc_BreakRotator_Pitch_5;
    params.CallFunc_BreakRotator_Yaw_5 = (float)CallFunc_BreakRotator_Yaw_5;
    params.CallFunc_MakeRotator_ReturnValue_4 = (FRotator)CallFunc_MakeRotator_ReturnValue_4;
    params.CallFunc_MakeRotator_ReturnValue_5 = (FRotator)CallFunc_MakeRotator_ReturnValue_5;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_4 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_4;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_5 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_5;
    params.CallFunc_FindLookAtRotation_ReturnValue_6 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_6;
    params.CallFunc_FindLookAtRotation_ReturnValue_7 = (FRotator)CallFunc_FindLookAtRotation_ReturnValue_7;
    params.CallFunc_BreakRotator_Roll_6 = (float)CallFunc_BreakRotator_Roll_6;
    params.CallFunc_BreakRotator_Pitch_6 = (float)CallFunc_BreakRotator_Pitch_6;
    params.CallFunc_BreakRotator_Yaw_6 = (float)CallFunc_BreakRotator_Yaw_6;
    params.CallFunc_BreakRotator_Roll_7 = (float)CallFunc_BreakRotator_Roll_7;
    params.CallFunc_BreakRotator_Pitch_7 = (float)CallFunc_BreakRotator_Pitch_7;
    params.CallFunc_BreakRotator_Yaw_7 = (float)CallFunc_BreakRotator_Yaw_7;
    params.CallFunc_MakeRotator_ReturnValue_6 = (FRotator)CallFunc_MakeRotator_ReturnValue_6;
    params.CallFunc_MakeRotator_ReturnValue_7 = (FRotator)CallFunc_MakeRotator_ReturnValue_7;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_6 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_6;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult_7 = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult_7;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_GreaterGreater_VectorRotator_ReturnValue = (FVector)CallFunc_GreaterGreater_VectorRotator_ReturnValue;
    params.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = (FVector)CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (FVector)K2Node_MathExpression_ReturnValue;
    params.CallFunc_BreakVector_X_9 = (float)CallFunc_BreakVector_X_9;
    params.CallFunc_BreakVector_Y_9 = (float)CallFunc_BreakVector_Y_9;
    params.CallFunc_BreakVector_Z_9 = (float)CallFunc_BreakVector_Z_9;
    params.K2Node_MathExpression_ReturnValue_1 = (FVector)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_4 = (FVector)CallFunc_MakeVector_ReturnValue_4;
    params.CallFunc_BreakVector_X_10 = (float)CallFunc_BreakVector_X_10;
    params.CallFunc_BreakVector_Y_10 = (float)CallFunc_BreakVector_Y_10;
    params.CallFunc_BreakVector_Z_10 = (float)CallFunc_BreakVector_Z_10;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_4 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_4;
    params.CallFunc_MakeVector_ReturnValue_5 = (FVector)CallFunc_MakeVector_ReturnValue_5;
    params.CallFunc_BreakVector_X_11 = (float)CallFunc_BreakVector_X_11;
    params.CallFunc_BreakVector_Y_11 = (float)CallFunc_BreakVector_Y_11;
    params.CallFunc_BreakVector_Z_11 = (float)CallFunc_BreakVector_Z_11;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_2 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_2;
    params.CallFunc_GetTargetTransform_ReturnValue = (FTransform)CallFunc_GetTargetTransform_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_TransformLocation_ReturnValue = (FVector)CallFunc_TransformLocation_ReturnValue;
    params.CallFunc_Multiply_VectorVector_ReturnValue = (FVector)CallFunc_Multiply_VectorVector_ReturnValue;
    params.CallFunc_GetRightVector_ReturnValue = (FVector)CallFunc_GetRightVector_ReturnValue;
    params.CallFunc_BreakVector_X_12 = (float)CallFunc_BreakVector_X_12;
    params.CallFunc_BreakVector_Y_12 = (float)CallFunc_BreakVector_Y_12;
    params.CallFunc_BreakVector_Z_12 = (float)CallFunc_BreakVector_Z_12;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_MakeRotFromZY_ReturnValue = (FRotator)CallFunc_MakeRotFromZY_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_6 = (FVector)CallFunc_MakeVector_ReturnValue_6;
    params.CallFunc_K2_SetWorldTransform_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldTransform_SweepHitResult;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_3 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_3;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.CallFunc_MakeVector_ReturnValue_7 = (FVector)CallFunc_MakeVector_ReturnValue_7;
    params.CallFunc_MakeVector_ReturnValue_8 = (FVector)CallFunc_MakeVector_ReturnValue_8;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_5 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_5;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_6 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_6;
    params.CallFunc_MakeVector_ReturnValue_9 = (FVector)CallFunc_MakeVector_ReturnValue_9;
    params.CallFunc_MakeVector_ReturnValue_10 = (FVector)CallFunc_MakeVector_ReturnValue_10;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_7 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_7;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_8 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_8;
    ProcessEvent(func, &params);
    LocalExtent = params.LocalExtent;
    LocalLocation = params.LocalLocation;
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::SetBeamBlockedState(UPrimitiveComponent* BeamComponent, bool IsBlocked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.SetBeamBlockedState"));
    struct Params_SetBeamBlockedState {
        UPrimitiveComponent* BeamComponent; // 0x0
        bool IsBlocked; // 0x8
    }; // Size: 0x9
    Params_SetBeamBlockedState params{};
    params.BeamComponent = (UPrimitiveComponent*)BeamComponent;
    params.IsBlocked = (bool)IsBlocked;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::UpdateBeamStates(bool TopRightBlocked, bool TopCentreBlocked, bool TopLeftBlocked, bool CentreRightBlocked, bool CentreBlocked, bool CentreLeftBlocked, bool BottomRightBlocked, bool BottomCentreBlocked, bool BottomLeftBlocked, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t Temp_int_Variable, UDecalComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, UStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.UpdateBeamStates"));
    struct Params_UpdateBeamStates {
        bool TopRightBlocked; // 0x0
        bool TopCentreBlocked; // 0x1
        bool TopLeftBlocked; // 0x2
        bool CentreRightBlocked; // 0x3
        bool CentreBlocked; // 0x4
        bool CentreLeftBlocked; // 0x5
        bool BottomRightBlocked; // 0x6
        bool BottomCentreBlocked; // 0x7
        bool BottomLeftBlocked; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0xc
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x10
        int32_t Temp_int_Variable; // 0x14
        UDecalComponent* CallFunc_Array_Get_Item; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x20
        bool CallFunc_IsVisible_ReturnValue; // 0x24
        char pad_25[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x28
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x2c
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x2d
        char pad_2e[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x30
        int32_t Temp_int_Variable_1; // 0x34
        UStaticMeshComponent* CallFunc_Array_Get_Item_1; // 0x38
        bool CallFunc_IsVisible_ReturnValue_1; // 0x40
        bool CallFunc_NotEqual_BoolBool_ReturnValue_1; // 0x41
        bool CallFunc_LessEqual_IntInt_ReturnValue_1; // 0x42
        char pad_43[0x1];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x44
    }; // Size: 0x48
    Params_UpdateBeamStates params{};
    params.TopRightBlocked = (bool)TopRightBlocked;
    params.TopCentreBlocked = (bool)TopCentreBlocked;
    params.TopLeftBlocked = (bool)TopLeftBlocked;
    params.CentreRightBlocked = (bool)CentreRightBlocked;
    params.CentreBlocked = (bool)CentreBlocked;
    params.CentreLeftBlocked = (bool)CentreLeftBlocked;
    params.BottomRightBlocked = (bool)BottomRightBlocked;
    params.BottomCentreBlocked = (bool)BottomCentreBlocked;
    params.BottomLeftBlocked = (bool)BottomLeftBlocked;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Get_Item = (UDecalComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_Array_Get_Item_1 = (UStaticMeshComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_IsVisible_ReturnValue_1 = (bool)CallFunc_IsVisible_ReturnValue_1;
    params.CallFunc_NotEqual_BoolBool_ReturnValue_1 = (bool)CallFunc_NotEqual_BoolBool_ReturnValue_1;
    params.CallFunc_LessEqual_IntInt_ReturnValue_1 = (bool)CallFunc_LessEqual_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::ExecuteUbergraph_BP_TransfigurationMovementStyle_DefaultGround(int32_t EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, bool Temp_bool_Variable, FTransform CallFunc_MakeTransform_ReturnValue_2, bool Temp_bool_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_InverseTransformDirection_ReturnValue, FVector CallFunc_InverseTransformDirection_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_3, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_GetPreviewBounds_OutCenter, FVector CallFunc_GetPreviewBounds_OutExtent, float CallFunc_GetMaxElement_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_InverseTransformDirection_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FTransform CallFunc_MakeTransform_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaSeconds, FVector CallFunc_InverseTransformDirection_ReturnValue_3, bool K2Node_Event_bCanPlace, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_6, bool K2Node_Event_bShow, bool CallFunc_IsBeingRemoved_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, TArray<UDecalComponent*>& K2Node_MakeArray_Array, TArray<UStaticMeshComponent*>& K2Node_MakeArray_Array_1, TArray<USceneComponent*>& K2Node_MakeArray_Array_2, bool CallFunc_IsPrefab_ReturnValue, bool CallFunc_UsesSurfacePlacement_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, ABP_TransfigurationPreviewPlacementAnimator_C* CallFunc_FinishSpawningActor_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_UsesSurfacePlacement_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, FVector CallFunc_GetUpVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UABP_TransfigurationPlaceDown_C* K2Node_DynamicCast_AsABP_Transfiguration_Place_Down, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector K2Node_Event_InLocationLocal, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<USceneComponent*>& K2Node_MakeArray_Array_3, USceneComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ExecuteUbergraph_BP_TransfigurationMovementStyle_DefaultGround"));
    struct Params_ExecuteUbergraph_BP_TransfigurationMovementStyle_DefaultGround {
        int32_t EntryPoint; // 0x0
        char pad_4[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x10
        FTransform CallFunc_MakeTransform_ReturnValue_1; // 0x40
        bool Temp_bool_Variable; // 0x70
        char pad_71[0xf];
        FTransform CallFunc_MakeTransform_ReturnValue_2; // 0x80
        bool Temp_bool_Variable_1; // 0xb0
        char pad_b1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0xb4
        int32_t Temp_int_Loop_Counter_Variable; // 0xb8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xbc
        bool Temp_bool_True_if_break_was_hit_Variable; // 0xc0
        char pad_c1[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0xc4
        bool CallFunc_Not_PreBool_ReturnValue; // 0xc8
        char pad_c9[0x3];
        FVector CallFunc_InverseTransformDirection_ReturnValue; // 0xcc
        FVector CallFunc_InverseTransformDirection_ReturnValue_1; // 0xd8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xe4
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0xe8
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0xf4
        char pad_f8[0x8];
        FTransform CallFunc_MakeTransform_ReturnValue_3; // 0x100
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x130
        char pad_13c[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue_4; // 0x140
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0x170
        FVector CallFunc_BreakTransform_Location; // 0x174
        FRotator CallFunc_BreakTransform_Rotation; // 0x180
        FVector CallFunc_BreakTransform_Scale; // 0x18c
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x198
        FVector CallFunc_GetPreviewBounds_OutCenter; // 0x19c
        FVector CallFunc_GetPreviewBounds_OutExtent; // 0x1a8
        float CallFunc_GetMaxElement_ReturnValue; // 0x1b4
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0x1b8
        FVector CallFunc_InverseTransformDirection_ReturnValue_2; // 0x1bc
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x1c8
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_2; // 0x1cc
        float CallFunc_Multiply_FloatFloat_ReturnValue_4; // 0x1d8
        char pad_1dc[0x4];
        FTransform CallFunc_MakeTransform_ReturnValue_5; // 0x1e0
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x210
        float K2Node_Event_DeltaSeconds; // 0x214
        FVector CallFunc_InverseTransformDirection_ReturnValue_3; // 0x218
        bool K2Node_Event_bCanPlace; // 0x224
        char pad_225[0x3];
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_3; // 0x228
        char pad_234[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue_6; // 0x240
        bool K2Node_Event_bShow; // 0x270
        bool CallFunc_IsBeingRemoved_ReturnValue; // 0x271
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x272
        bool CallFunc_IsVisible_ReturnValue; // 0x273
        bool CallFunc_IsVisible_ReturnValue_1; // 0x274
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x275
        bool CallFunc_NotEqual_BoolBool_ReturnValue_1; // 0x276
        char pad_277[0x1];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x278
        char pad_27c[0x4];
        TArray<UDecalComponent*> K2Node_MakeArray_Array; // 0x280
        TArray<UStaticMeshComponent*> K2Node_MakeArray_Array_1; // 0x290
        TArray<USceneComponent*> K2Node_MakeArray_Array_2; // 0x2a0
        bool CallFunc_IsPrefab_ReturnValue; // 0x2b0
        bool CallFunc_UsesSurfacePlacement_ReturnValue; // 0x2b1
        bool CallFunc_BooleanOR_ReturnValue; // 0x2b2
        char pad_2b3[0x5];
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x2b8
        bool CallFunc_IsValid_ReturnValue; // 0x2c0
        char pad_2c1[0x7];
        ABP_TransfigurationPreviewPlacementAnimator_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x2c8
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x2d0
        bool CallFunc_Less_IntInt_ReturnValue; // 0x2d4
        char pad_2d5[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x2d8
        bool CallFunc_UsesSurfacePlacement_ReturnValue_1; // 0x2dc
        char pad_2dd[0x3];
        FRotator CallFunc_K2_GetComponentRotation_ReturnValue; // 0x2e0
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x2ec
        char pad_2ed[0x3];
        FVector CallFunc_GetUpVector_ReturnValue; // 0x2f0
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x2fc
        bool CallFunc_BooleanAND_ReturnValue; // 0x2fd
        char pad_2fe[0x2];
        FVector CallFunc_BreakTransform_Location_1; // 0x300
        FRotator CallFunc_BreakTransform_Rotation_1; // 0x30c
        FVector CallFunc_BreakTransform_Scale_1; // 0x318
        float CallFunc_BreakVector_X; // 0x324
        float CallFunc_BreakVector_Y; // 0x328
        float CallFunc_BreakVector_Z; // 0x32c
        UAnimInstance* CallFunc_GetAnimInstance_ReturnValue; // 0x330
        FVector CallFunc_MakeVector_ReturnValue; // 0x338
        char pad_344[0x4];
        UABP_TransfigurationPlaceDown_C* K2Node_DynamicCast_AsABP_Transfiguration_Place_Down; // 0x348
        bool K2Node_DynamicCast_bSuccess; // 0x350
        char pad_351[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x354
        float CallFunc_BreakVector_X_1; // 0x360
        float CallFunc_BreakVector_Y_1; // 0x364
        float CallFunc_BreakVector_Z_1; // 0x368
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x36c
        FVector K2Node_Event_InLocationLocal; // 0x378
        bool CallFunc_EqualEqual_VectorVector_ReturnValue_1; // 0x384
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x385
        char pad_386[0x2];
        TArray<USceneComponent*> K2Node_MakeArray_Array_3; // 0x388
        USceneComponent* CallFunc_Array_Get_Item; // 0x398
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x3a0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x3a4
        char pad_3a5[0x3];
        float CallFunc_Vector_DistanceSquared_ReturnValue; // 0x3a8
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x3ac
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x3ad
    }; // Size: 0x3ae
    Params_ExecuteUbergraph_BP_TransfigurationMovementStyle_DefaultGround params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeTransform_ReturnValue_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_MakeTransform_ReturnValue_2 = (FTransform)CallFunc_MakeTransform_ReturnValue_2;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_InverseTransformDirection_ReturnValue = (FVector)CallFunc_InverseTransformDirection_ReturnValue;
    params.CallFunc_InverseTransformDirection_ReturnValue_1 = (FVector)CallFunc_InverseTransformDirection_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue_3 = (FTransform)CallFunc_MakeTransform_ReturnValue_3;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_MakeTransform_ReturnValue_4 = (FTransform)CallFunc_MakeTransform_ReturnValue_4;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_GetPreviewBounds_OutCenter = (FVector)CallFunc_GetPreviewBounds_OutCenter;
    params.CallFunc_GetPreviewBounds_OutExtent = (FVector)CallFunc_GetPreviewBounds_OutExtent;
    params.CallFunc_GetMaxElement_ReturnValue = (float)CallFunc_GetMaxElement_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.CallFunc_InverseTransformDirection_ReturnValue_2 = (FVector)CallFunc_InverseTransformDirection_ReturnValue_2;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_2 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_4 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_4;
    params.CallFunc_MakeTransform_ReturnValue_5 = (FTransform)CallFunc_MakeTransform_ReturnValue_5;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_InverseTransformDirection_ReturnValue_3 = (FVector)CallFunc_InverseTransformDirection_ReturnValue_3;
    params.K2Node_Event_bCanPlace = (bool)K2Node_Event_bCanPlace;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_3 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_3;
    params.CallFunc_MakeTransform_ReturnValue_6 = (FTransform)CallFunc_MakeTransform_ReturnValue_6;
    params.K2Node_Event_bShow = (bool)K2Node_Event_bShow;
    params.CallFunc_IsBeingRemoved_ReturnValue = (bool)CallFunc_IsBeingRemoved_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue_1 = (bool)CallFunc_IsVisible_ReturnValue_1;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_NotEqual_BoolBool_ReturnValue_1 = (bool)CallFunc_NotEqual_BoolBool_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<UDecalComponent*>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<UStaticMeshComponent*>)K2Node_MakeArray_Array_1;
    params.K2Node_MakeArray_Array_2 = (TArray<USceneComponent*>)K2Node_MakeArray_Array_2;
    params.CallFunc_IsPrefab_ReturnValue = (bool)CallFunc_IsPrefab_ReturnValue;
    params.CallFunc_UsesSurfacePlacement_ReturnValue = (bool)CallFunc_UsesSurfacePlacement_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_TransfigurationPreviewPlacementAnimator_C*)CallFunc_FinishSpawningActor_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_UsesSurfacePlacement_ReturnValue_1 = (bool)CallFunc_UsesSurfacePlacement_ReturnValue_1;
    params.CallFunc_K2_GetComponentRotation_ReturnValue = (FRotator)CallFunc_K2_GetComponentRotation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_GetUpVector_ReturnValue = (FVector)CallFunc_GetUpVector_ReturnValue;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BreakTransform_Location_1 = (FVector)CallFunc_BreakTransform_Location_1;
    params.CallFunc_BreakTransform_Rotation_1 = (FRotator)CallFunc_BreakTransform_Rotation_1;
    params.CallFunc_BreakTransform_Scale_1 = (FVector)CallFunc_BreakTransform_Scale_1;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_GetAnimInstance_ReturnValue = (UAnimInstance*)CallFunc_GetAnimInstance_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.K2Node_DynamicCast_AsABP_Transfiguration_Place_Down = (UABP_TransfigurationPlaceDown_C*)K2Node_DynamicCast_AsABP_Transfiguration_Place_Down;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.K2Node_Event_InLocationLocal = (FVector)K2Node_Event_InLocationLocal;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue_1 = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.K2Node_MakeArray_Array_3 = (TArray<USceneComponent*>)K2Node_MakeArray_Array_3;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Vector_DistanceSquared_ReturnValue = (float)CallFunc_Vector_DistanceSquared_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_3 = params.K2Node_MakeArray_Array_3;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
    K2Node_MakeArray_Array_2 = params.K2Node_MakeArray_Array_2;
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::PlaceTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.PlaceTimeline__UpdateFunc"));
    struct Params_PlaceTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_PlaceTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::LiftTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.LiftTimeline__UpdateFunc"));
    struct Params_LiftTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_LiftTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::LiftTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.LiftTimeline__FinishedFunc"));
    struct Params_LiftTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_LiftTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::ClearLitBeams() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ClearLitBeams"));
    struct Params_ClearLitBeams {
    }; // Size: 0x0
    Params_ClearLitBeams params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::MovementTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.MovementTimeline__FinishedFunc"));
    struct Params_MovementTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_MovementTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::MovementTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.MovementTimeline__UpdateFunc"));
    struct Params_MovementTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_MovementTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::PlaceTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.PlaceTimeline__FinishedFunc"));
    struct Params_PlaceTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_PlaceTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::PlaceTimeline__Impact__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.PlaceTimeline__Impact__EventFunc"));
    struct Params_PlaceTimeline__Impact__EventFunc {
    }; // Size: 0x0
    Params_PlaceTimeline__Impact__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::Lift() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.Lift"));
    struct Params_Lift {
    }; // Size: 0x0
    Params_Lift params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::Place() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.Place"));
    struct Params_Place {
    }; // Size: 0x0
    Params_Place params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::CanPlace(bool bCanPlace) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.CanPlace"));
    struct Params_CanPlace {
        bool bCanPlace; // 0x0
    }; // Size: 0x1
    Params_CanPlace params{};
    params.bCanPlace = (bool)bCanPlace;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::ShowDecal(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ShowDecal"));
    struct Params_ShowDecal {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowDecal params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationMovementStyle_DefaultGround_C::ShowBeamAtLocalLocation(FVector& InLocationLocal) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_DefaultGround.BP_TransfigurationMovementStyle_DefaultGround_C.ShowBeamAtLocalLocation"));
    struct Params_ShowBeamAtLocalLocation {
        FVector InLocationLocal; // 0x0
    }; // Size: 0xc
    Params_ShowBeamAtLocalLocation params{};
    params.InLocationLocal = (FVector)InLocationLocal;
    ProcessEvent(func, &params);
    InLocationLocal = params.InLocationLocal;
}
