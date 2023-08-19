#include "FAudioDialogueLineData.hpp"
#include "UFunction.hpp"
#include "USubtitleElement.hpp"
#include "UUserWidget.hpp"
USubtitleElement* USubtitleElement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SubtitleElement");
    return (USubtitleElement*)res;
}
void USubtitleElement::InitAudioDialogueLineData(FAudioDialogueLineData& AudioDialogueLineData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleElement.InitAudioDialogueLineData"));
    struct Params_InitAudioDialogueLineData {
        FAudioDialogueLineData AudioDialogueLineData; // 0x0
    }; // Size: 0x50
    Params_InitAudioDialogueLineData params{};
    params.AudioDialogueLineData = (FAudioDialogueLineData)AudioDialogueLineData;
    ProcessEvent(func, &params);
    AudioDialogueLineData = params.AudioDialogueLineData;
}
