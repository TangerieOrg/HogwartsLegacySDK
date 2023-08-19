#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "URichTextBlock.hpp"
#include "USubtitleElement.hpp"
#include "UUI_BP_Subtitle_C.hpp"
#include "UUI_BP_Subtitle_Element_C.hpp"
void UUI_BP_Subtitle_Element_C::GetRichText(URichTextBlock*& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.GetRichText"));
    struct Params_GetRichText {
        URichTextBlock* NewParam; // 0x0
    }; // Size: 0x8
    Params_GetRichText params{};
    params.NewParam = (URichTextBlock*)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
UUI_BP_Subtitle_Element_C* UUI_BP_Subtitle_Element_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C");
    return (UUI_BP_Subtitle_Element_C*)res;
}
void UUI_BP_Subtitle_Element_C::UI_Subtitles_Cleanup(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.UI_Subtitles_Cleanup"));
    struct Params_UI_Subtitles_Cleanup {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_UI_Subtitles_Cleanup params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::AdjustHeight(float PixelsUP) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.AdjustHeight"));
    struct Params_AdjustHeight {
        float PixelsUP; // 0x0
    }; // Size: 0x4
    Params_AdjustHeight params{};
    params.PixelsUP = (float)PixelsUP;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::PauseSubtitles(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.PauseSubtitles"));
    struct Params_PauseSubtitles {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PauseSubtitles params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::ResumeSubtitles(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.ResumeSubtitles"));
    struct Params_ResumeSubtitles {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResumeSubtitles params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::SubtitlesCleanup() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.SubtitlesCleanup"));
    struct Params_SubtitlesCleanup {
    }; // Size: 0x0
    Params_SubtitlesCleanup params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::SetTimer(FTimerHandle Timer) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.SetTimer"));
    struct Params_SetTimer {
        FTimerHandle Timer; // 0x0
    }; // Size: 0x8
    Params_SetTimer params{};
    params.Timer = (FTimerHandle)Timer;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::SetRichText(FString InputString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.SetRichText"));
    struct Params_SetRichText {
        FString InputString; // 0x0
    }; // Size: 0x10
    Params_SetRichText params{};
    params.InputString = (FString)InputString;
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::ResetHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Subtitles/UI_BP_Subtitle_Element.UI_BP_Subtitle_Element_C.ResetHeight"));
    struct Params_ResetHeight {
    }; // Size: 0x0
    Params_ResetHeight params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Subtitle_Element_C::ExecuteUbergraph_UI_BP_Subtitle_Element(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller_2) {}
