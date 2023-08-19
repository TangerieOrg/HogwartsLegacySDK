#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "USubtitle_HUD.hpp"
class UCanvasPanel;
class UUI_BP_Subtitle_C;
class URichTextBlock;
class UObject;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UUI_BP_Subtitle_HUD_C : public USubtitle_HUD {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UCanvasPanel* CanvasPanel_0; // 0x270
    UUI_BP_Subtitle_C* UI_BP_Subtitle; // 0x278
    float DefaultSubtitleHeight; // 0x280
    char pad_284[0x4];
    static UUI_BP_Subtitle_HUD_C* StaticClass();
    void GetRichText(URichTextBlock*& NewParam);
    void SetRichText(FString InputString);
    void Construct();
    void SubtitlesCleanup();
    void AdjustHeight(float PixelsUP);
    void ResetHeight();
    void SubtitleHUD_Show(UObject* Caller);
    void SubtitleHUD_Hide(UObject* Caller);
    void Destruct();
    void ExecuteUbergraph_UI_BP_Subtitle_HUD(int32_t EntryPoint, FString K2Node_Event_InputString, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float K2Node_Event_PixelsUP, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller);
}; // Size: 0x288
#pragma pack(pop)
