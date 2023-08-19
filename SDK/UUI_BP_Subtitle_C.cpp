#include "FAudioDialogueLineData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FVariantMapHandle.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USubtitleElement.hpp"
#include "USubtitles.hpp"
#include "UUI_BP_Subtitle_C.hpp"
#include "UUI_BP_Subtitle_Element_C.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
UUI_BP_Subtitle_C* UUI_BP_Subtitle_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C");
    return (UUI_BP_Subtitle_C*)res;
}
void UUI_BP_Subtitle_C::AddStandaloneSubtitle(FString InputResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.AddStandaloneSubtitle"));
    struct Params_AddStandaloneSubtitle {
        FString InputResolvedSubtitle; // 0x0
    }; // Size: 0x10
    Params_AddStandaloneSubtitle params{};
    params.InputResolvedSubtitle = (FString)InputResolvedSubtitle;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::UpdateStandaloneSubtitle(FString InputResolvedSubtitle, UWidget* CallFunc_GetChildAt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Length_ReturnValue) {}
void UUI_BP_Subtitle_C::RemoveAllFromSubtitleBox(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, UWidget* CallFunc_Array_Get_Item, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.RemoveAllFromSubtitleBox"));
    struct Params_RemoveAllFromSubtitleBox {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        TArray<UWidget*> CallFunc_GetAllChildren_ReturnValue; // 0x10
        UWidget* CallFunc_Array_Get_Item; // 0x20
        TArray<UWidget*> CallFunc_GetAllChildren_ReturnValue_1; // 0x28
        UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x44
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x48
        char pad_49[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x50
    }; // Size: 0x51
    Params_RemoveAllFromSubtitleBox params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetAllChildren_ReturnValue = (TArray<UWidget*>)CallFunc_GetAllChildren_ReturnValue;
    params.CallFunc_Array_Get_Item = (UWidget*)CallFunc_Array_Get_Item;
    params.CallFunc_GetAllChildren_ReturnValue_1 = (TArray<UWidget*>)CallFunc_GetAllChildren_ReturnValue_1;
    params.K2Node_DynamicCast_AsUI_BP_Subtitle_Element = (UUI_BP_Subtitle_Element_C*)K2Node_DynamicCast_AsUI_BP_Subtitle_Element;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllChildren_ReturnValue = params.CallFunc_GetAllChildren_ReturnValue;
    CallFunc_GetAllChildren_ReturnValue_1 = params.CallFunc_GetAllChildren_ReturnValue_1;
}
void UUI_BP_Subtitle_C::OnLoaded_1643F56B420F3870192A8DBF8E43830F(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.OnLoaded_1643F56B420F3870192A8DBF8E43830F"));
    struct Params_OnLoaded_1643F56B420F3870192A8DBF8E43830F {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_1643F56B420F3870192A8DBF8E43830F params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::Add_Resolved_Subtitle_to_Panel(FAudioDialogueLineData InSubtitleData, FString ResolvedSubtitle, FString TranslatedString) {}
void UUI_BP_Subtitle_C::RemovefromSubtitleBox(FAudioDialogueLineData Subtitle, UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_HasChild_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_HasChild_ReturnValue_1, USubtitleElement* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.RemovefromSubtitleBox"));
    struct Params_RemovefromSubtitleBox {
        FAudioDialogueLineData Subtitle; // 0x0
        UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        bool CallFunc_RemoveChild_ReturnValue; // 0x59
        bool CallFunc_Map_Remove_ReturnValue; // 0x5a
        bool CallFunc_HasChild_ReturnValue; // 0x5b
        bool CallFunc_RemoveChild_ReturnValue_1; // 0x5c
        bool CallFunc_HasChild_ReturnValue_1; // 0x5d
        char pad_5e[0x2];
        USubtitleElement* CallFunc_Map_Find_Value; // 0x60
        bool CallFunc_Map_Find_ReturnValue; // 0x68
    }; // Size: 0x69
    Params_RemovefromSubtitleBox params{};
    params.Subtitle = (FAudioDialogueLineData)Subtitle;
    params.K2Node_DynamicCast_AsUI_BP_Subtitle_Element = (UUI_BP_Subtitle_Element_C*)K2Node_DynamicCast_AsUI_BP_Subtitle_Element;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_RemoveChild_ReturnValue = (bool)CallFunc_RemoveChild_ReturnValue;
    params.CallFunc_Map_Remove_ReturnValue = (bool)CallFunc_Map_Remove_ReturnValue;
    params.CallFunc_HasChild_ReturnValue = (bool)CallFunc_HasChild_ReturnValue;
    params.CallFunc_RemoveChild_ReturnValue_1 = (bool)CallFunc_RemoveChild_ReturnValue_1;
    params.CallFunc_HasChild_ReturnValue_1 = (bool)CallFunc_HasChild_ReturnValue_1;
    params.CallFunc_Map_Find_Value = (USubtitleElement*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0"));
    struct Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0 {
        FVariantMapHandle VariantMapHandle; // 0x0
    }; // Size: 0x4
    Params_InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0 params{};
    params.VariantMapHandle = (FVariantMapHandle)VariantMapHandle;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::BPAddSubtitleEvent(FAudioDialogueLineData SubtitleData, FString ResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.BPAddSubtitleEvent"));
    struct Params_BPAddSubtitleEvent {
        FAudioDialogueLineData SubtitleData; // 0x0
        FString ResolvedSubtitle; // 0x50
    }; // Size: 0x60
    Params_BPAddSubtitleEvent params{};
    params.SubtitleData = (FAudioDialogueLineData)SubtitleData;
    params.ResolvedSubtitle = (FString)ResolvedSubtitle;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::BPRemoveSubtitleEvent(FAudioDialogueLineData SubtitleData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.BPRemoveSubtitleEvent"));
    struct Params_BPRemoveSubtitleEvent {
        FAudioDialogueLineData SubtitleData; // 0x0
    }; // Size: 0x50
    Params_BPRemoveSubtitleEvent params{};
    params.SubtitleData = (FAudioDialogueLineData)SubtitleData;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::BPAddStandaloneSubtitle(FString ResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.BPAddStandaloneSubtitle"));
    struct Params_BPAddStandaloneSubtitle {
        FString ResolvedSubtitle; // 0x0
    }; // Size: 0x10
    Params_BPAddStandaloneSubtitle params{};
    params.ResolvedSubtitle = (FString)ResolvedSubtitle;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::BPRemoveStandaloneSubtitle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.BPRemoveStandaloneSubtitle"));
    struct Params_BPRemoveStandaloneSubtitle {
    }; // Size: 0x0
    Params_BPRemoveStandaloneSubtitle params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::BPUpdateStandaloneSubtitle(FString ResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle.UI_BP_Subtitle_C.BPUpdateStandaloneSubtitle"));
    struct Params_BPUpdateStandaloneSubtitle {
        FString ResolvedSubtitle; // 0x0
    }; // Size: 0x10
    Params_BPUpdateStandaloneSubtitle params{};
    params.ResolvedSubtitle = (FString)ResolvedSubtitle;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_C::ExecuteUbergraph_UI_BP_Subtitle(int32_t EntryPoint, FString K2Node_Event_ResolvedSubtitle, UClass* K2Node_CustomEvent_Loaded, UClass* Temp_class_Variable, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle) {}
