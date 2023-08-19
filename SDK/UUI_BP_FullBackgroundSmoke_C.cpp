#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FIntPoint.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "UFunction.hpp"
#include "UGameUserSettings.hpp"
#include "UI_BP_BackgroundSmoke_Enum\Type.hpp"
#include "UObject.hpp"
#include "UPhoenixImage.hpp"
#include "UScreen.hpp"
#include "UUI_BP_FullBackgroundSmoke_C.hpp"
void UUI_BP_FullBackgroundSmoke_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
UUI_BP_FullBackgroundSmoke_C* UUI_BP_FullBackgroundSmoke_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C");
    return (UUI_BP_FullBackgroundSmoke_C*)res;
}
void UUI_BP_FullBackgroundSmoke_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
bool UUI_BP_FullBackgroundSmoke_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t NewQuantity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t NewQuantity; // 0x4
    }; // Size: 0x8
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.NewQuantity = (int32_t)NewQuantity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_FullBackgroundSmoke_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::SequenceEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.SequenceEvent_1"));
    struct Params_SequenceEvent_1 {
    }; // Size: 0x0
    Params_SequenceEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::ExecuteUbergraph_UI_BP_FullBackgroundSmoke(int32_t EntryPoint, UI_BP_BackgroundSmoke_Enum::Type Temp_byte_Variable, UObject* Temp_object_Variable, UObject* Temp_object_Variable_1, UObject* Temp_object_Variable_2, UObject* Temp_object_Variable_3, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, int32_t K2Node_Event_OutroType, int32_t K2Node_Event_IntroType, UObject* K2Node_Select_Default, bool K2Node_Event_IsDesignTime, FSlateBrush K2Node_MakeStruct_SlateBrush, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, FIntPoint CallFunc_GetScreenResolution_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.ExecuteUbergraph_UI_BP_FullBackgroundSmoke"));
    struct Params_ExecuteUbergraph_UI_BP_FullBackgroundSmoke {
        int32_t EntryPoint; // 0x0
        UI_BP_BackgroundSmoke_Enum::Type Temp_byte_Variable; // 0x4
        char pad_5[0x3];
        UObject* Temp_object_Variable; // 0x8
        UObject* Temp_object_Variable_1; // 0x10
        UObject* Temp_object_Variable_2; // 0x18
        UObject* Temp_object_Variable_3; // 0x20
        int32_t K2Node_Event_IntroType_1; // 0x28
        float K2Node_Event_IntroDuration; // 0x2c
        int32_t K2Node_Event_OutroType_1; // 0x30
        float K2Node_Event_OutroDuration; // 0x34
        int32_t K2Node_Event_OutroType; // 0x38
        int32_t K2Node_Event_IntroType; // 0x3c
        UObject* K2Node_Select_Default; // 0x40
        bool K2Node_Event_IsDesignTime; // 0x48
        char pad_49[0x7];
        FSlateBrush K2Node_MakeStruct_SlateBrush; // 0x50
        UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue; // 0xd8
        FIntPoint CallFunc_GetScreenResolution_ReturnValue; // 0xe0
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0xe8
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0xec
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xf0
    }; // Size: 0xf4
    Params_ExecuteUbergraph_UI_BP_FullBackgroundSmoke params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_byte_Variable = (UI_BP_BackgroundSmoke_Enum::Type)Temp_byte_Variable;
    params.Temp_object_Variable = (UObject*)Temp_object_Variable;
    params.Temp_object_Variable_1 = (UObject*)Temp_object_Variable_1;
    params.Temp_object_Variable_2 = (UObject*)Temp_object_Variable_2;
    params.Temp_object_Variable_3 = (UObject*)Temp_object_Variable_3;
    params.K2Node_Event_IntroType_1 = (int32_t)K2Node_Event_IntroType_1;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.K2Node_Event_OutroType_1 = (int32_t)K2Node_Event_OutroType_1;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_Select_Default = (UObject*)K2Node_Select_Default;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_MakeStruct_SlateBrush = (FSlateBrush)K2Node_MakeStruct_SlateBrush;
    params.CallFunc_GetGameUserSettings_ReturnValue = (UGameUserSettings*)CallFunc_GetGameUserSettings_ReturnValue;
    params.CallFunc_GetScreenResolution_ReturnValue = (FIntPoint)CallFunc_GetScreenResolution_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::OnItemPurchaseFailedNoSpace__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemPurchaseFailedNoSpace__DelegateSignature"));
    struct Params_OnItemPurchaseFailedNoSpace__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchaseFailedNoSpace__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::OnItemPurchaseFailedNoMoney__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemPurchaseFailedNoMoney__DelegateSignature"));
    struct Params_OnItemPurchaseFailedNoMoney__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchaseFailedNoMoney__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::OnItemSold__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemSold__DelegateSignature"));
    struct Params_OnItemSold__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemSold__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::OnItemPurchased__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.OnItemPurchased__DelegateSignature"));
    struct Params_OnItemPurchased__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchased__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::LeavePreview__DelegateSignature(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.LeavePreview__DelegateSignature"));
    struct Params_LeavePreview__DelegateSignature {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_LeavePreview__DelegateSignature params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::StartPreview__DelegateSignature(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.StartPreview__DelegateSignature"));
    struct Params_StartPreview__DelegateSignature {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_StartPreview__DelegateSignature params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UUI_BP_FullBackgroundSmoke_C::AbortInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_FullBackgroundSmoke.UI_BP_FullBackgroundSmoke_C.AbortInteraction__DelegateSignature"));
    struct Params_AbortInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_AbortInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
