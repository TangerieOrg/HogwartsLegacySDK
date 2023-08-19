#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URichTextBlock.hpp"
#include "USubtitle_HUD.hpp"
#include "UUI_BP_Subtitle_C.hpp"
#include "UUI_BP_Subtitle_HUD_C.hpp"
void UUI_BP_Subtitle_HUD_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::SetRichText(FString InputString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SetRichText"));
    struct Params_SetRichText {
        FString InputString; // 0x0
    }; // Size: 0x10
    Params_SetRichText params{};
    params.InputString = (FString)InputString;
    ProcessEvent(func, &params);
}
UUI_BP_Subtitle_HUD_C* UUI_BP_Subtitle_HUD_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C");
    return (UUI_BP_Subtitle_HUD_C*)res;
}
void UUI_BP_Subtitle_HUD_C::GetRichText(URichTextBlock*& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.GetRichText"));
    struct Params_GetRichText {
        URichTextBlock* NewParam; // 0x0
    }; // Size: 0x8
    Params_GetRichText params{};
    params.NewParam = (URichTextBlock*)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UUI_BP_Subtitle_HUD_C::ResetHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.ResetHeight"));
    struct Params_ResetHeight {
    }; // Size: 0x0
    Params_ResetHeight params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::SubtitlesCleanup() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SubtitlesCleanup"));
    struct Params_SubtitlesCleanup {
    }; // Size: 0x0
    Params_SubtitlesCleanup params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::AdjustHeight(float PixelsUP) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.AdjustHeight"));
    struct Params_AdjustHeight {
        float PixelsUP; // 0x0
    }; // Size: 0x4
    Params_AdjustHeight params{};
    params.PixelsUP = (float)PixelsUP;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::SubtitleHUD_Show(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SubtitleHUD_Show"));
    struct Params_SubtitleHUD_Show {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SubtitleHUD_Show params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::SubtitleHUD_Hide(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.SubtitleHUD_Hide"));
    struct Params_SubtitleHUD_Hide {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SubtitleHUD_Hide params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitle_HUD/UI_BP_Subtitle_HUD.UI_BP_Subtitle_HUD_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_HUD_C::ExecuteUbergraph_UI_BP_Subtitle_HUD(int32_t EntryPoint, FString K2Node_Event_InputString, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float K2Node_Event_PixelsUP, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller) {}
