#pragma once
#include <cstdint>
#include "FAudioDialogueLineData.hpp"
#include "UUserWidget.hpp"
class UVerticalBox;
#pragma pack(push, 1)
class USubtitles : public UUserWidget {
public:
    UVerticalBox* BP_Subtitle_Box; // 0x268
    UVerticalBox* Subtitle_Box; // 0x270
    UVerticalBox* Subtitle_Box_LowPriority; // 0x278
    char pad_280[0xa0];
    static USubtitles* StaticClass();
    void Setup();
    void EvaluateSubtitleVerticalBox(UVerticalBox* Subtitle_VerticalBox);
    void BPUpdateStandaloneSubtitle(FString ResolvedSubtitle);
    void BPRemoveSubtitleEvent(FAudioDialogueLineData SubtitleData);
    void BPRemoveStandaloneSubtitle();
    void BPAddSubtitleEvent(FAudioDialogueLineData SubtitleData, FString ResolvedSubtitle);
    void BPAddStandaloneSubtitle(FString ResolvedSubtitle);
}; // Size: 0x320
#pragma pack(pop)
