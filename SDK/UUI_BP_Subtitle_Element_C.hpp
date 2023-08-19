#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "USubtitleElement.hpp"
class UBorder;
class UPhoenixRichTextBlock;
class UUI_BP_Subtitle_C;
class URichTextBlock;
class UObject;
#pragma pack(push, 1)
class UUI_BP_Subtitle_Element_C : public USubtitleElement {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
    UBorder* Shadow; // 0x2d0
    UPhoenixRichTextBlock* Text_Element; // 0x2d8
    UUI_BP_Subtitle_C* Parent; // 0x2e0
    FTimerHandle Timer; // 0x2e8
    bool bAudioDurationOverriden; // 0x2f0
    char pad_2f1[0x7];
    static UUI_BP_Subtitle_Element_C* StaticClass();
    void GetRichText(URichTextBlock*& NewParam);
    void UI_Subtitles_Cleanup(UObject* Caller);
    void PauseSubtitles(UObject* Caller);
    void ResumeSubtitles(UObject* Caller);
    void Destruct();
    void SubtitlesCleanup();
    void SetTimer(FTimerHandle Timer);
    void SetRichText(FString InputString);
    void Construct();
    void AdjustHeight(float PixelsUP);
    void ResetHeight();
    void ExecuteUbergraph_UI_BP_Subtitle_Element(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller_2);
}; // Size: 0x2f8
#pragma pack(pop)
