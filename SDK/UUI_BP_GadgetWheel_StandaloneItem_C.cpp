#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UCreatureManager.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_GadgetWheel_StandaloneItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_GadgetWheel_StandaloneItem_C* UUI_BP_GadgetWheel_StandaloneItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C");
    return (UUI_BP_GadgetWheel_StandaloneItem_C*)res;
}
void UUI_BP_GadgetWheel_StandaloneItem_C::GetTimeoutPct(float& pct, FString CreatureID, UCreatureManager* CallFunc_Get_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetDeathTimeoutPercentage_ReturnValue, float CallFunc_FClamp_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.GetTimeoutPct"));
    struct Params_GetTimeoutPct {
        float pct; // 0x0
        char pad_4[0x4];
        FString CreatureID; // 0x8
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x18
        bool K2Node_SwitchName_CmpSuccess; // 0x20
        char pad_21[0x3];
        float CallFunc_GetDeathTimeoutPercentage_ReturnValue; // 0x24
        float CallFunc_FClamp_ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_GetTimeoutPct params{};
    params.pct = (float)pct;
    params.CreatureID = (FString)CreatureID;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.CallFunc_GetDeathTimeoutPercentage_ReturnValue = (float)CallFunc_GetDeathTimeoutPercentage_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    ProcessEvent(func, &params);
    pct = params.pct;
}
void UUI_BP_GadgetWheel_StandaloneItem_C::CheckItemID(FString NewID, FString& NewItemID, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.CheckItemID"));
    struct Params_CheckItemID {
        char pad_0[0x10];
        FString NewItemID; // 0x10
        FString NewID; // 0x20
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x30
        char pad_31[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x38
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x50
    }; // Size: 0x60
    Params_CheckItemID params{};
    params.NewID = (FString)NewID;
    params.NewItemID = (FString)NewItemID;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    NewItemID = params.NewItemID;
}
void UUI_BP_GadgetWheel_StandaloneItem_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::OnLoadItemIcon(UTexture2D* LoadedTexture, UObject* CallbackParam, UMaterialInstanceDynamic* iconImage, FString CreatureID, UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_GetTimeoutPct_Pct, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.OnLoadItemIcon"));
    struct Params_OnLoadItemIcon {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
        UMaterialInstanceDynamic* iconImage; // 0x10
        FString CreatureID; // 0x18
        UImage* K2Node_DynamicCast_AsImage; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x38
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x40
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2; // 0x48
        float CallFunc_GetTimeoutPct_Pct; // 0x50
        bool CallFunc_NearlyEqual_FloatFloat_ReturnValue; // 0x54
        char pad_55[0x3];
        float CallFunc_SelectFloat_ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_OnLoadItemIcon params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    params.iconImage = (UMaterialInstanceDynamic*)iconImage;
    params.CreatureID = (FString)CreatureID;
    params.K2Node_DynamicCast_AsImage = (UImage*)K2Node_DynamicCast_AsImage;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.CallFunc_GetDynamicMaterial_ReturnValue_2 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_2;
    params.CallFunc_GetTimeoutPct_Pct = (float)CallFunc_GetTimeoutPct_Pct;
    params.CallFunc_NearlyEqual_FloatFloat_ReturnValue = (bool)CallFunc_NearlyEqual_FloatFloat_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_GadgetWheel_StandaloneItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_GadgetWheel_StandaloneItem_C::Toggle_Highlight(bool Is_Highlighted, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.Toggle Highlight"));
    struct Params_Toggle_Highlight {
        bool Is_Highlighted; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Toggle_Highlight params{};
    params.Is_Highlighted = (bool)Is_Highlighted;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::SetUsability(bool IsUsable, bool Temp_bool_Variable, float CallFunc_SelectFloat_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetTimeoutPct_Pct, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.SetUsability"));
    struct Params_SetUsability {
        bool IsUsable; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x2];
        float CallFunc_SelectFloat_ReturnValue; // 0x4
        ESlateVisibility Temp_byte_Variable; // 0x8
        ESlateVisibility Temp_byte_Variable_1; // 0x9
        bool Temp_bool_Variable_1; // 0xa
        ESlateVisibility Temp_byte_Variable_2; // 0xb
        ESlateVisibility Temp_byte_Variable_3; // 0xc
        char pad_d[0x3];
        float CallFunc_GetTimeoutPct_Pct; // 0x10
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x14
        bool CallFunc_BooleanAND_ReturnValue; // 0x15
        ESlateVisibility K2Node_Select_Default; // 0x16
        ESlateVisibility K2Node_Select_Default_1; // 0x17
    }; // Size: 0x18
    Params_SetUsability params{};
    params.IsUsable = (bool)IsUsable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.CallFunc_GetTimeoutPct_Pct = (float)CallFunc_GetTimeoutPct_Pct;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::SetItemName(FName ItemName, FString CallFunc_Conv_NameToString_ReturnValue) {}
void UUI_BP_GadgetWheel_StandaloneItem_C::BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem(int32_t EntryPoint, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem"));
    struct Params_ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
        bool K2Node_Event_IsDesignTime; // 0x10
    }; // Size: 0x11
    Params_ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_StandaloneItem_C::OnClickEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel_StandaloneItem.UI_BP_GadgetWheel_StandaloneItem_C.OnClickEvent__DelegateSignature"));
    struct Params_OnClickEvent__DelegateSignature {
    }; // Size: 0x0
    Params_OnClickEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
