#include "AActor.hpp"
#include "ABP_AlohomoraLock_C.hpp"
#include "ABiped_Player.hpp"
#include "APlayerController.hpp"
#include "EDifficulty.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EInputDeviceUsed.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FHitBySpellData.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UABP_AlohomoraLock_C.hpp"
#include "UAkComponent.hpp"
#include "UBlendableGlobalLightingComponent.hpp"
#include "UBoxComponent.hpp"
#include "UCineCameraComponent.hpp"
#include "UFoliageRemoverActorComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPointLightComponent.hpp"
#include "UPostProcessComponent.hpp"
#include "URenderSettingsCustomBlendDomainOverrideNamedComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_SimpleLegend_Screen_C.hpp"
ABP_AlohomoraLock_C* ABP_AlohomoraLock_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C");
    return (ABP_AlohomoraLock_C*)res;
}
void ABP_AlohomoraLock_C::PlayLightWhooshMotion(float StickAngle, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.PlayLightWhooshMotion"));
    struct Params_PlayLightWhooshMotion {
        float StickAngle; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x4
        UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PlayLightWhooshMotion params{};
    params.StickAngle = (float)StickAngle;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_SpawnAkComponentAtLocation_ReturnValue = (UAkComponent*)CallFunc_SpawnAkComponentAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::HighContrastMode(bool Disable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.HighContrastMode"));
    struct Params_HighContrastMode {
        bool Disable; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x2];
        float Temp_float_Variable; // 0x4
        float Temp_float_Variable_1; // 0x8
        float K2Node_Select_Default; // 0xc
    }; // Size: 0x10
    Params_HighContrastMode params{};
    params.Disable = (bool)Disable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::ClickSFX(int32_t PrevInnerClicksInt, int32_t InnerClicksInt, int32_t PrevOuterClicksInt, int32_t OuterClicksInt, float DegreesBetweenClicks, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_AlohomoraLock_C::UpdateLegend(EInputDeviceUsed Temp_byte_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, EInputDeviceUsed Temp_byte_Variable_1, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, EDifficulty CallFunc_GetCurrentGameDifficulty_Difficulty, bool CallFunc_GetCurrentGameDifficulty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString K2Node_Select_Default, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FString K2Node_Select_Default_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.UpdateLegend"));
    struct Params_UpdateLegend {
        EInputDeviceUsed Temp_byte_Variable; // 0x0
        char pad_1[0x7];
        FString Temp_string_Variable; // 0x8
        FString Temp_string_Variable_1; // 0x18
        FString Temp_string_Variable_2; // 0x28
        EInputDeviceUsed Temp_byte_Variable_1; // 0x38
        char pad_39[0x7];
        FString Temp_string_Variable_3; // 0x40
        FString Temp_string_Variable_4; // 0x50
        FString Temp_string_Variable_5; // 0x60
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x70
        FLegendItemData K2Node_MakeStruct_LegendItemData; // 0x78
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0xa8
        EDifficulty CallFunc_GetCurrentGameDifficulty_Difficulty; // 0xa9
        bool CallFunc_GetCurrentGameDifficulty_ReturnValue; // 0xaa
        bool K2Node_SwitchEnum_CmpSuccess; // 0xab
        char pad_ac[0x4];
        FString K2Node_Select_Default; // 0xb0
        FLegendItemData K2Node_MakeStruct_LegendItemData_1; // 0xc0
        FString K2Node_Select_Default_1; // 0xf0
        FLegendItemData K2Node_MakeStruct_LegendItemData_2; // 0x100
        FLegendItemData K2Node_MakeStruct_LegendItemData_3; // 0x130
        TArray<FLegendItemData> K2Node_MakeArray_Array; // 0x160
        TArray<FLegendItemData> K2Node_MakeArray_Array_1; // 0x170
    }; // Size: 0x180
    Params_UpdateLegend params{};
    params.Temp_byte_Variable = (EInputDeviceUsed)Temp_byte_Variable;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.Temp_byte_Variable_1 = (EInputDeviceUsed)Temp_byte_Variable_1;
    params.Temp_string_Variable_3 = (FString)Temp_string_Variable_3;
    params.Temp_string_Variable_4 = (FString)Temp_string_Variable_4;
    params.Temp_string_Variable_5 = (FString)Temp_string_Variable_5;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.K2Node_MakeStruct_LegendItemData = (FLegendItemData)K2Node_MakeStruct_LegendItemData;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.CallFunc_GetCurrentGameDifficulty_Difficulty = (EDifficulty)CallFunc_GetCurrentGameDifficulty_Difficulty;
    params.CallFunc_GetCurrentGameDifficulty_ReturnValue = (bool)CallFunc_GetCurrentGameDifficulty_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_Select_Default = (FString)K2Node_Select_Default;
    params.K2Node_MakeStruct_LegendItemData_1 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_1;
    params.K2Node_Select_Default_1 = (FString)K2Node_Select_Default_1;
    params.K2Node_MakeStruct_LegendItemData_2 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_2;
    params.K2Node_MakeStruct_LegendItemData_3 = (FLegendItemData)K2Node_MakeStruct_LegendItemData_3;
    params.K2Node_MakeArray_Array = (TArray<FLegendItemData>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<FLegendItemData>)K2Node_MakeArray_Array_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
}
float ABP_AlohomoraLock_C::OuterFXAngle(float CallFunc_LeftStickAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.OuterFXAngle"));
    struct Params_OuterFXAngle {
        float ReturnValue; // 0x0
        float CallFunc_LeftStickAngle_ReturnValue; // 0x4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_OuterFXAngle params{};
    params.CallFunc_LeftStickAngle_ReturnValue = (float)CallFunc_LeftStickAngle_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABP_AlohomoraLock_C::ActivateUI(bool Activate, bool CallFunc_Not_PreBool_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_SimpleLegend_Screen_C* CallFunc_Create_ReturnValue, UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.ActivateUI"));
    struct Params_ActivateUI {
        bool Activate; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1
        char pad_2[0x6];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        UUI_BP_SimpleLegend_Screen_C* CallFunc_Create_ReturnValue; // 0x10
        UUIManager* CallFunc_Get_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ActivateUI params{};
    params.Activate = (bool)Activate;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_SimpleLegend_Screen_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::CalculateJitter(float JitterSpeed, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_VLerp_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CalculateJitter"));
    struct Params_CalculateJitter {
        float JitterSpeed; // 0x0
        float CallFunc_RandomFloatInRange_ReturnValue; // 0x4
        float CallFunc_RandomFloatInRange_ReturnValue_1; // 0x8
        float CallFunc_RandomFloatInRange_ReturnValue_2; // 0xc
        float CallFunc_RandomFloatInRange_ReturnValue_3; // 0x10
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x14
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x20
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x24
        FVector CallFunc_GetActorUpVector_ReturnValue; // 0x30
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_1; // 0x3c
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x48
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x54
        FVector CallFunc_VLerp_ReturnValue; // 0x58
        FVector CallFunc_GetActorForwardVector_ReturnValue_1; // 0x64
        FVector CallFunc_GetActorUpVector_ReturnValue_1; // 0x70
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_2; // 0x7c
        FVector CallFunc_Multiply_VectorFloat_ReturnValue_3; // 0x88
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0x94
        FVector CallFunc_VLerp_ReturnValue_1; // 0xa0
    }; // Size: 0xac
    Params_CalculateJitter params{};
    params.JitterSpeed = (float)JitterSpeed;
    params.CallFunc_RandomFloatInRange_ReturnValue = (float)CallFunc_RandomFloatInRange_ReturnValue;
    params.CallFunc_RandomFloatInRange_ReturnValue_1 = (float)CallFunc_RandomFloatInRange_ReturnValue_1;
    params.CallFunc_RandomFloatInRange_ReturnValue_2 = (float)CallFunc_RandomFloatInRange_ReturnValue_2;
    params.CallFunc_RandomFloatInRange_ReturnValue_3 = (float)CallFunc_RandomFloatInRange_ReturnValue_3;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_GetActorUpVector_ReturnValue = (FVector)CallFunc_GetActorUpVector_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_VLerp_ReturnValue = (FVector)CallFunc_VLerp_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue_1 = (FVector)CallFunc_GetActorForwardVector_ReturnValue_1;
    params.CallFunc_GetActorUpVector_ReturnValue_1 = (FVector)CallFunc_GetActorUpVector_ReturnValue_1;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_2 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_2;
    params.CallFunc_Multiply_VectorFloat_ReturnValue_3 = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue_3;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_VLerp_ReturnValue_1 = (FVector)CallFunc_VLerp_ReturnValue_1;
    ProcessEvent(func, &params);
}
float ABP_AlohomoraLock_C::RightStickAngle(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.RightStickAngle"));
    struct Params_RightStickAngle {
        float ReturnValue; // 0x0
        char pad_4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        float CallFunc_GetInputAxisValue_ReturnValue; // 0x10
        float CallFunc_GetInputAxisValue_ReturnValue_1; // 0x14
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x18
        float CallFunc_DegAtan2_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_RightStickAngle params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue = (float)CallFunc_GetInputAxisValue_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue_1 = (float)CallFunc_GetInputAxisValue_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_DegAtan2_ReturnValue = (float)CallFunc_DegAtan2_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ABP_AlohomoraLock_C::InnerFXAngle(float CallFunc_RightStickAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.InnerFXAngle"));
    struct Params_InnerFXAngle {
        float ReturnValue; // 0x0
        float CallFunc_RightStickAngle_ReturnValue; // 0x4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_InnerFXAngle params{};
    params.CallFunc_RightStickAngle_ReturnValue = (float)CallFunc_RightStickAngle_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABP_AlohomoraLock_C::OnRightStickPressed(float InnerSocketDegrees) {}
void ABP_AlohomoraLock_C::PickClosest45(float A, float& Out, float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_6, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.PickClosest45"));
    struct Params_PickClosest45 {
        float A; // 0x0
        float Out; // 0x4
        float Value; // 0x8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0xc
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1; // 0xd
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2; // 0xe
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3; // 0xf
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_4; // 0x10
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_5; // 0x11
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_6; // 0x12
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x13
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_7; // 0x14
        bool CallFunc_BooleanOR_ReturnValue; // 0x15
    }; // Size: 0x16
    Params_PickClosest45 params{};
    params.A = (float)A;
    params.Out = (float)Out;
    params.Value = (float)Value;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_3 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_3;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_4 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_4;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_5 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_5;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_6 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_6;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_7 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_7;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    Out = params.Out;
}
bool ABP_AlohomoraLock_C::CalcLeftStickPressed(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CalcLeftStickPressed"));
    struct Params_CalcLeftStickPressed {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        float CallFunc_GetInputAxisValue_ReturnValue; // 0x10
        float CallFunc_GetInputAxisValue_ReturnValue_1; // 0x14
        float CallFunc_Abs_ReturnValue; // 0x18
        float CallFunc_Abs_ReturnValue_1; // 0x1c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x20
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x21
        bool CallFunc_BooleanOR_ReturnValue; // 0x22
    }; // Size: 0x23
    Params_CalcLeftStickPressed params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue = (float)CallFunc_GetInputAxisValue_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue_1 = (float)CallFunc_GetInputAxisValue_ReturnValue_1;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_AlohomoraLock_C::CameraTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CameraTimeline__FinishedFunc"));
    struct Params_CameraTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_CameraTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
bool ABP_AlohomoraLock_C::CalcRightStickPressed(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CalcRightStickPressed"));
    struct Params_CalcRightStickPressed {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        float CallFunc_GetInputAxisValue_ReturnValue; // 0x10
        float CallFunc_GetInputAxisValue_ReturnValue_1; // 0x14
        float CallFunc_Abs_ReturnValue; // 0x18
        float CallFunc_Abs_ReturnValue_1; // 0x1c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x20
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x21
        bool CallFunc_BooleanOR_ReturnValue; // 0x22
    }; // Size: 0x23
    Params_CalcRightStickPressed params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue = (float)CallFunc_GetInputAxisValue_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue_1 = (float)CallFunc_GetInputAxisValue_ReturnValue_1;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_AlohomoraLock_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
float ABP_AlohomoraLock_C::LeftStickAngle(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_DegAtan2_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.LeftStickAngle"));
    struct Params_LeftStickAngle {
        float ReturnValue; // 0x0
        char pad_4[0x4];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        float CallFunc_GetInputAxisValue_ReturnValue; // 0x10
        float CallFunc_GetInputAxisValue_ReturnValue_1; // 0x14
        float CallFunc_DegAtan2_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_LeftStickAngle params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue = (float)CallFunc_GetInputAxisValue_ReturnValue;
    params.CallFunc_GetInputAxisValue_ReturnValue_1 = (float)CallFunc_GetInputAxisValue_ReturnValue_1;
    params.CallFunc_DegAtan2_ReturnValue = (float)CallFunc_DegAtan2_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABP_AlohomoraLock_C::CalculateAnglesFromSticks(float DeltaTime, float& NewParam, float InnerInterpSpeed, float OuterInterpSpeed, float DeltaSec, float CallFunc_RightStickAngle_ReturnValue, float CallFunc_LeftStickAngle_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_LeftStickAngle_ReturnValue_1, float CallFunc_RightStickAngle_ReturnValue_1, float CallFunc_PickClosest45_Out, float CallFunc_PickClosest45_Out_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FRotator CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_SetAngleToRange_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_2, FRotator CallFunc_RInterpTo_ReturnValue_1, float CallFunc_SetAngleToRange_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_SetAngleToRange_ReturnValue_2, float CallFunc_Abs_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CalculateAnglesFromSticks"));
    struct Params_CalculateAnglesFromSticks {
        float DeltaTime; // 0x0
        float NewParam; // 0x4
        float InnerInterpSpeed; // 0x8
        float OuterInterpSpeed; // 0xc
        float DeltaSec; // 0x10
        float CallFunc_RightStickAngle_ReturnValue; // 0x14
        float CallFunc_LeftStickAngle_ReturnValue; // 0x18
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x1c
        float CallFunc_Subtract_FloatFloat_ReturnValue_1; // 0x20
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x24
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x28
        float CallFunc_LeftStickAngle_ReturnValue_1; // 0x2c
        float CallFunc_RightStickAngle_ReturnValue_1; // 0x30
        float CallFunc_PickClosest45_Out; // 0x34
        float CallFunc_PickClosest45_Out_1; // 0x38
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x3c
        FRotator CallFunc_MakeRotator_ReturnValue_1; // 0x48
        FRotator CallFunc_RInterpTo_ReturnValue; // 0x54
        float CallFunc_BreakRotator_Roll; // 0x60
        float CallFunc_BreakRotator_Pitch; // 0x64
        float CallFunc_BreakRotator_Yaw; // 0x68
        float CallFunc_SetAngleToRange_ReturnValue; // 0x6c
        FRotator CallFunc_MakeRotator_ReturnValue_2; // 0x70
        FRotator CallFunc_MakeRotator_ReturnValue_3; // 0x7c
        float CallFunc_Subtract_FloatFloat_ReturnValue_2; // 0x88
        FRotator CallFunc_RInterpTo_ReturnValue_1; // 0x8c
        float CallFunc_SetAngleToRange_ReturnValue_1; // 0x98
        float CallFunc_BreakRotator_Roll_1; // 0x9c
        float CallFunc_BreakRotator_Pitch_1; // 0xa0
        float CallFunc_BreakRotator_Yaw_1; // 0xa4
        float CallFunc_Abs_ReturnValue; // 0xa8
        float CallFunc_Subtract_FloatFloat_ReturnValue_3; // 0xac
        float CallFunc_SetAngleToRange_ReturnValue_2; // 0xb0
        float CallFunc_Abs_ReturnValue_1; // 0xb4
    }; // Size: 0xb8
    Params_CalculateAnglesFromSticks params{};
    params.DeltaTime = (float)DeltaTime;
    params.NewParam = (float)NewParam;
    params.InnerInterpSpeed = (float)InnerInterpSpeed;
    params.OuterInterpSpeed = (float)OuterInterpSpeed;
    params.DeltaSec = (float)DeltaSec;
    params.CallFunc_RightStickAngle_ReturnValue = (float)CallFunc_RightStickAngle_ReturnValue;
    params.CallFunc_LeftStickAngle_ReturnValue = (float)CallFunc_LeftStickAngle_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_1 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_LeftStickAngle_ReturnValue_1 = (float)CallFunc_LeftStickAngle_ReturnValue_1;
    params.CallFunc_RightStickAngle_ReturnValue_1 = (float)CallFunc_RightStickAngle_ReturnValue_1;
    params.CallFunc_PickClosest45_Out = (float)CallFunc_PickClosest45_Out;
    params.CallFunc_PickClosest45_Out_1 = (float)CallFunc_PickClosest45_Out_1;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue_1 = (FRotator)CallFunc_MakeRotator_ReturnValue_1;
    params.CallFunc_RInterpTo_ReturnValue = (FRotator)CallFunc_RInterpTo_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_SetAngleToRange_ReturnValue = (float)CallFunc_SetAngleToRange_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue_2 = (FRotator)CallFunc_MakeRotator_ReturnValue_2;
    params.CallFunc_MakeRotator_ReturnValue_3 = (FRotator)CallFunc_MakeRotator_ReturnValue_3;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_2 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_2;
    params.CallFunc_RInterpTo_ReturnValue_1 = (FRotator)CallFunc_RInterpTo_ReturnValue_1;
    params.CallFunc_SetAngleToRange_ReturnValue_1 = (float)CallFunc_SetAngleToRange_ReturnValue_1;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue_3 = (float)CallFunc_Subtract_FloatFloat_ReturnValue_3;
    params.CallFunc_SetAngleToRange_ReturnValue_2 = (float)CallFunc_SetAngleToRange_ReturnValue_2;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
float ABP_AlohomoraLock_C::SetAngleToRange(float InputPin, float Angle, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.SetAngleToRange"));
    struct Params_SetAngleToRange {
        float InputPin; // 0x0
        float ReturnValue; // 0x4
        float Angle; // 0x8
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xc
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x10
        char pad_11[0x3];
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x14
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SetAngleToRange params{};
    params.InputPin = (float)InputPin;
    params.Angle = (float)Angle;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ABP_AlohomoraLock_C::OnLeftStickPressed(float OuterSocketDegrees) {}
void ABP_AlohomoraLock_C::CameraTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CameraTimeline__UpdateFunc"));
    struct Params_CameraTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_CameraTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::CabinetOpen(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.CabinetOpen"));
    struct Params_CabinetOpen {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CabinetOpen params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::RightButtonPressed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.RightButtonPressed"));
    struct Params_RightButtonPressed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RightButtonPressed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::ActorHitBySpell(UObject* Caller, FHitBySpellData& HitBySpell) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.ActorHitBySpell"));
    struct Params_ActorHitBySpell {
        UObject* Caller; // 0x0
        FHitBySpellData HitBySpell; // 0x8
    }; // Size: 0x50
    Params_ActorHitBySpell params{};
    params.Caller = (UObject*)Caller;
    params.HitBySpell = (FHitBySpellData)HitBySpell;
    ProcessEvent(func, &params);
    HitBySpell = params.HitBySpell;
}
void ABP_AlohomoraLock_C::Exit() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.Exit"));
    struct Params_Exit {
    }; // Size: 0x0
    Params_Exit params{};
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::Alohomora_OuterRing_Pressed(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_OuterRing_Pressed"));
    struct Params_Alohomora_OuterRing_Pressed {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_Alohomora_OuterRing_Pressed params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::Alohomora_InnerRing_Pressed(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_InnerRing_Pressed"));
    struct Params_Alohomora_InnerRing_Pressed {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_Alohomora_InnerRing_Pressed params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::Alohomora_OuterRing_Released(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_OuterRing_Released"));
    struct Params_Alohomora_OuterRing_Released {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_Alohomora_OuterRing_Released params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::Alohomora_InnerRing_Released(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.Alohomora_InnerRing_Released"));
    struct Params_Alohomora_InnerRing_Released {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_Alohomora_InnerRing_Released params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::ExitImmediately(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.ExitImmediately"));
    struct Params_ExitImmediately {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ExitImmediately params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::AutoSolve() {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Environments/AlohomoraLock/BP_AlohomoraLock.BP_AlohomoraLock_C.AutoSolve"));
    struct Params_AutoSolve {
    }; // Size: 0x0
    Params_AutoSolve params{};
    ProcessEvent(func, &params);
}
void ABP_AlohomoraLock_C::ExecuteUbergraph_BP_AlohomoraLock(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
