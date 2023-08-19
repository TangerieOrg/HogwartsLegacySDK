#include "ECombatParryType.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCombatParryButtonCallout.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_CombatParry_ButtonCallout_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CombatParry_ButtonCallout_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
UUI_BP_CombatParry_ButtonCallout_C* UUI_BP_CombatParry_ButtonCallout_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C");
    return (UUI_BP_CombatParry_ButtonCallout_C*)res;
}
void UUI_BP_CombatParry_ButtonCallout_C::Refresh_Platform_Specific_Button(UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.Refresh Platform Specific Button"));
    struct Params_Refresh_Platform_Specific_Button {
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x0
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x8
        bool K2Node_SwitchEnum_CmpSuccess; // 0x10
        bool K2Node_SwitchEnum_CmpSuccess_1; // 0x11
    }; // Size: 0x12
    Params_Refresh_Platform_Specific_Button params{};
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_SwitchEnum_CmpSuccess_1 = (bool)K2Node_SwitchEnum_CmpSuccess_1;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::BlueprintSetParryType0(ECombatParryType ParryType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.BlueprintSetParryType"));
    struct Params_BlueprintSetParryType {
        ECombatParryType ParryType; // 0x0
    }; // Size: 0x1
    Params_BlueprintSetParryType params{};
    params.ParryType = (ECombatParryType)ParryType;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::BlueprintSetPerfectTimingState0(bool bPerfectTiming) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.BlueprintSetPerfectTimingState"));
    struct Params_BlueprintSetPerfectTimingState {
        bool bPerfectTiming; // 0x0
    }; // Size: 0x1
    Params_BlueprintSetPerfectTimingState params{};
    params.bPerfectTiming = (bool)bPerfectTiming;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::OnInputDeviceChanged0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.OnInputDeviceChanged"));
    struct Params_OnInputDeviceChanged {
    }; // Size: 0x0
    Params_OnInputDeviceChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CombatParry_ButtonCallout_C::ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32_t K2Node_Event_OutroType, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, int32_t K2Node_Event_IntroType, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, ECombatParryType K2Node_Event_ParryType, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_bPerfectTiming, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatParry_ButtonCallout.UI_BP_CombatParry_ButtonCallout_C.ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout"));
    struct Params_ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        float CallFunc_PauseAnimation_ReturnValue; // 0x10
        float CallFunc_PauseAnimation_ReturnValue_1; // 0x14
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x18
        int32_t K2Node_Event_OutroType; // 0x20
        char pad_24[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2; // 0x28
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0x30
        char pad_31[0x3];
        int32_t K2Node_Event_IntroType; // 0x34
        bool CallFunc_NotEqual_FloatFloat_ReturnValue; // 0x38
        char pad_39[0x3];
        float CallFunc_SelectFloat_ReturnValue; // 0x3c
        float K2Node_MathExpression_ReturnValue; // 0x40
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x44
        char pad_45[0x3];
        float CallFunc_Lerp_ReturnValue; // 0x48
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x4c
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x54
        char pad_5c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3; // 0x60
        int32_t K2Node_Event_OutroType_1; // 0x68
        float K2Node_Event_OutroDuration; // 0x6c
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4; // 0x70
        bool K2Node_SwitchInteger_CmpSuccess; // 0x78
        char pad_79[0x3];
        int32_t K2Node_Event_IntroType_1; // 0x7c
        float K2Node_Event_IntroDuration; // 0x80
        FGeometry K2Node_Event_MyGeometry; // 0x84
        float K2Node_Event_InDeltaTime; // 0xbc
        ECombatParryType K2Node_Event_ParryType; // 0xc0
        char pad_c1[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xc4
        bool K2Node_Event_bPerfectTiming; // 0xc8
        char pad_c9[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5; // 0xd0
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0xd8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6; // 0xe0
    }; // Size: 0xe8
    Params_ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PauseAnimation_ReturnValue = (float)CallFunc_PauseAnimation_ReturnValue;
    params.CallFunc_PauseAnimation_ReturnValue_1 = (float)CallFunc_PauseAnimation_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    params.CallFunc_PlayAnimation_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_2;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.CallFunc_NotEqual_FloatFloat_ReturnValue = (bool)CallFunc_NotEqual_FloatFloat_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_Lerp_ReturnValue = (float)CallFunc_Lerp_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue_3 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_3;
    params.K2Node_Event_OutroType_1 = (int32_t)K2Node_Event_OutroType_1;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.CallFunc_PlayAnimation_ReturnValue_4 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_4;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.K2Node_Event_IntroType_1 = (int32_t)K2Node_Event_IntroType_1;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.K2Node_Event_ParryType = (ECombatParryType)K2Node_Event_ParryType;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.K2Node_Event_bPerfectTiming = (bool)K2Node_Event_bPerfectTiming;
    params.CallFunc_PlayAnimation_ReturnValue_5 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_5;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_6 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_6;
    ProcessEvent(func, &params);
}
