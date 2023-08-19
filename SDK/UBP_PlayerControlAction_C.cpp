#include "ACharacter.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_PlayerControlAction_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
bool UBP_PlayerControlAction_C::IsProxyRequiredBP0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/StopPlayerMovement/BP_PlayerControlAction.BP_PlayerControlAction_C.IsProxyRequiredBP"));
    struct Params_IsProxyRequiredBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsProxyRequiredBP params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBP_PlayerControlAction_C* UBP_PlayerControlAction_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/SceneActions/StopPlayerMovement/BP_PlayerControlAction.BP_PlayerControlAction_C");
    return (UBP_PlayerControlAction_C*)res;
}
FLinearColor UBP_PlayerControlAction_C::GetActionColor0(FColor K2Node_MakeStruct_Color, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/StopPlayerMovement/BP_PlayerControlAction.BP_PlayerControlAction_C.GetActionColor"));
    struct Params_GetActionColor {
        FLinearColor ReturnValue; // 0x0
        FColor K2Node_MakeStruct_Color; // 0x10
        FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue; // 0x14
    }; // Size: 0x24
    Params_GetActionColor params{};
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_Conv_ColorToLinearColor_ReturnValue = (FLinearColor)CallFunc_Conv_ColorToLinearColor_ReturnValue;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UBP_PlayerControlAction_C::ExecuteUbergraph_BP_PlayerControlAction(int32_t EntryPoint, int32_t CallFunc_SelectInt_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue_1, int32_t CallFunc_SelectInt_ReturnValue_2, int32_t CallFunc_SelectInt_ReturnValue_3, int32_t CallFunc_SelectInt_ReturnValue_4, int32_t CallFunc_SelectInt_ReturnValue_5, int32_t CallFunc_SelectInt_ReturnValue_6, int32_t CallFunc_SelectInt_ReturnValue_7, int32_t CallFunc_SelectInt_ReturnValue_8, int32_t CallFunc_SelectInt_ReturnValue_9, int32_t CallFunc_SelectInt_ReturnValue_10, int32_t CallFunc_SelectInt_ReturnValue_11, int32_t CallFunc_SelectInt_ReturnValue_12, int32_t CallFunc_SelectInt_ReturnValue_13, UObject* CallFunc_GetActionObjectBP_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_SelectInt_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_1, UObject* CallFunc_GetActionObjectBP_ReturnValue_1, int32_t CallFunc_SelectInt_ReturnValue_16, ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_Time, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing, int32_t CallFunc_SelectInt_ReturnValue_17, int32_t CallFunc_SelectInt_ReturnValue_18, float K2Node_Event_Time_1, bool K2Node_Event_IsScrubbing_1, int32_t CallFunc_SelectInt_ReturnValue_19) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/StopPlayerMovement/BP_PlayerControlAction.BP_PlayerControlAction_C.ExecuteUbergraph_BP_PlayerControlAction"));
    struct Params_ExecuteUbergraph_BP_PlayerControlAction {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_SelectInt_ReturnValue; // 0x4
        int32_t CallFunc_SelectInt_ReturnValue_1; // 0x8
        int32_t CallFunc_SelectInt_ReturnValue_2; // 0xc
        int32_t CallFunc_SelectInt_ReturnValue_3; // 0x10
        int32_t CallFunc_SelectInt_ReturnValue_4; // 0x14
        int32_t CallFunc_SelectInt_ReturnValue_5; // 0x18
        int32_t CallFunc_SelectInt_ReturnValue_6; // 0x1c
        int32_t CallFunc_SelectInt_ReturnValue_7; // 0x20
        int32_t CallFunc_SelectInt_ReturnValue_8; // 0x24
        int32_t CallFunc_SelectInt_ReturnValue_9; // 0x28
        int32_t CallFunc_SelectInt_ReturnValue_10; // 0x2c
        int32_t CallFunc_SelectInt_ReturnValue_11; // 0x30
        int32_t CallFunc_SelectInt_ReturnValue_12; // 0x34
        int32_t CallFunc_SelectInt_ReturnValue_13; // 0x38
        char pad_3c[0x4];
        UObject* CallFunc_GetActionObjectBP_ReturnValue; // 0x40
        ACharacter* K2Node_DynamicCast_AsCharacter; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
        char pad_51[0x3];
        int32_t CallFunc_SelectInt_ReturnValue_14; // 0x54
        bool CallFunc_BooleanOR_ReturnValue; // 0x58
        char pad_59[0x3];
        int32_t CallFunc_SelectInt_ReturnValue_15; // 0x5c
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x60
        char pad_61[0x7];
        UObject* CallFunc_GetActionObjectBP_ReturnValue_1; // 0x68
        int32_t CallFunc_SelectInt_ReturnValue_16; // 0x70
        char pad_74[0x4];
        ACharacter* K2Node_DynamicCast_AsCharacter_1; // 0x78
        bool K2Node_DynamicCast_bSuccess_1; // 0x80
        char pad_81[0x3];
        float K2Node_Event_Time; // 0x84
        bool K2Node_Event_Cancelled; // 0x88
        bool K2Node_Event_IsScrubbing; // 0x89
        char pad_8a[0x2];
        int32_t CallFunc_SelectInt_ReturnValue_17; // 0x8c
        int32_t CallFunc_SelectInt_ReturnValue_18; // 0x90
        float K2Node_Event_Time_1; // 0x94
        bool K2Node_Event_IsScrubbing_1; // 0x98
        char pad_99[0x3];
        int32_t CallFunc_SelectInt_ReturnValue_19; // 0x9c
    }; // Size: 0xa0
    Params_ExecuteUbergraph_BP_PlayerControlAction params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue_1 = (int32_t)CallFunc_SelectInt_ReturnValue_1;
    params.CallFunc_SelectInt_ReturnValue_2 = (int32_t)CallFunc_SelectInt_ReturnValue_2;
    params.CallFunc_SelectInt_ReturnValue_3 = (int32_t)CallFunc_SelectInt_ReturnValue_3;
    params.CallFunc_SelectInt_ReturnValue_4 = (int32_t)CallFunc_SelectInt_ReturnValue_4;
    params.CallFunc_SelectInt_ReturnValue_5 = (int32_t)CallFunc_SelectInt_ReturnValue_5;
    params.CallFunc_SelectInt_ReturnValue_6 = (int32_t)CallFunc_SelectInt_ReturnValue_6;
    params.CallFunc_SelectInt_ReturnValue_7 = (int32_t)CallFunc_SelectInt_ReturnValue_7;
    params.CallFunc_SelectInt_ReturnValue_8 = (int32_t)CallFunc_SelectInt_ReturnValue_8;
    params.CallFunc_SelectInt_ReturnValue_9 = (int32_t)CallFunc_SelectInt_ReturnValue_9;
    params.CallFunc_SelectInt_ReturnValue_10 = (int32_t)CallFunc_SelectInt_ReturnValue_10;
    params.CallFunc_SelectInt_ReturnValue_11 = (int32_t)CallFunc_SelectInt_ReturnValue_11;
    params.CallFunc_SelectInt_ReturnValue_12 = (int32_t)CallFunc_SelectInt_ReturnValue_12;
    params.CallFunc_SelectInt_ReturnValue_13 = (int32_t)CallFunc_SelectInt_ReturnValue_13;
    params.CallFunc_GetActionObjectBP_ReturnValue = (UObject*)CallFunc_GetActionObjectBP_ReturnValue;
    params.K2Node_DynamicCast_AsCharacter = (ACharacter*)K2Node_DynamicCast_AsCharacter;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_SelectInt_ReturnValue_14 = (int32_t)CallFunc_SelectInt_ReturnValue_14;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue_15 = (int32_t)CallFunc_SelectInt_ReturnValue_15;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_GetActionObjectBP_ReturnValue_1 = (UObject*)CallFunc_GetActionObjectBP_ReturnValue_1;
    params.CallFunc_SelectInt_ReturnValue_16 = (int32_t)CallFunc_SelectInt_ReturnValue_16;
    params.K2Node_DynamicCast_AsCharacter_1 = (ACharacter*)K2Node_DynamicCast_AsCharacter_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_Cancelled = (bool)K2Node_Event_Cancelled;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.CallFunc_SelectInt_ReturnValue_17 = (int32_t)CallFunc_SelectInt_ReturnValue_17;
    params.CallFunc_SelectInt_ReturnValue_18 = (int32_t)CallFunc_SelectInt_ReturnValue_18;
    params.K2Node_Event_Time_1 = (float)K2Node_Event_Time_1;
    params.K2Node_Event_IsScrubbing_1 = (bool)K2Node_Event_IsScrubbing_1;
    params.CallFunc_SelectInt_ReturnValue_19 = (int32_t)CallFunc_SelectInt_ReturnValue_19;
    ProcessEvent(func, &params);
}
void UBP_PlayerControlAction_C::GetDisplayName0() {}
void UBP_PlayerControlAction_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/StopPlayerMovement/BP_PlayerControlAction.BP_PlayerControlAction_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_PlayerControlAction_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/SceneActions/StopPlayerMovement/BP_PlayerControlAction.BP_PlayerControlAction_C.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
