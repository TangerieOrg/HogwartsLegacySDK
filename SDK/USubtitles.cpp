#include "FAudioDialogueLineData.hpp"
#include "UFunction.hpp"
#include "USubtitles.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
USubtitles* USubtitles::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Subtitles");
    return (USubtitles*)res;
}
void USubtitles::BPRemoveStandaloneSubtitle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.BPRemoveStandaloneSubtitle"));
    struct Params_BPRemoveStandaloneSubtitle {
    }; // Size: 0x0
    Params_BPRemoveStandaloneSubtitle params{};
    ProcessEvent(func, &params);
}
void USubtitles::Setup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.Setup"));
    struct Params_Setup {
    }; // Size: 0x0
    Params_Setup params{};
    ProcessEvent(func, &params);
}
void USubtitles::EvaluateSubtitleVerticalBox(UVerticalBox* Subtitle_VerticalBox) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.EvaluateSubtitleVerticalBox"));
    struct Params_EvaluateSubtitleVerticalBox {
        UVerticalBox* Subtitle_VerticalBox; // 0x0
    }; // Size: 0x8
    Params_EvaluateSubtitleVerticalBox params{};
    params.Subtitle_VerticalBox = (UVerticalBox*)Subtitle_VerticalBox;
    ProcessEvent(func, &params);
}
void USubtitles::BPUpdateStandaloneSubtitle(FString ResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.BPUpdateStandaloneSubtitle"));
    struct Params_BPUpdateStandaloneSubtitle {
        FString ResolvedSubtitle; // 0x0
    }; // Size: 0x10
    Params_BPUpdateStandaloneSubtitle params{};
    params.ResolvedSubtitle = (FString)ResolvedSubtitle;
    ProcessEvent(func, &params);
}
void USubtitles::BPAddSubtitleEvent(FAudioDialogueLineData SubtitleData, FString ResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.BPAddSubtitleEvent"));
    struct Params_BPAddSubtitleEvent {
        FAudioDialogueLineData SubtitleData; // 0x0
        FString ResolvedSubtitle; // 0x50
    }; // Size: 0x60
    Params_BPAddSubtitleEvent params{};
    params.SubtitleData = (FAudioDialogueLineData)SubtitleData;
    params.ResolvedSubtitle = (FString)ResolvedSubtitle;
    ProcessEvent(func, &params);
}
void USubtitles::BPRemoveSubtitleEvent(FAudioDialogueLineData SubtitleData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.BPRemoveSubtitleEvent"));
    struct Params_BPRemoveSubtitleEvent {
        FAudioDialogueLineData SubtitleData; // 0x0
    }; // Size: 0x50
    Params_BPRemoveSubtitleEvent params{};
    params.SubtitleData = (FAudioDialogueLineData)SubtitleData;
    ProcessEvent(func, &params);
}
void USubtitles::BPAddStandaloneSubtitle(FString ResolvedSubtitle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Subtitles.BPAddStandaloneSubtitle"));
    struct Params_BPAddStandaloneSubtitle {
        FString ResolvedSubtitle; // 0x0
    }; // Size: 0x10
    Params_BPAddStandaloneSubtitle params{};
    params.ResolvedSubtitle = (FString)ResolvedSubtitle;
    ProcessEvent(func, &params);
}
