#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUIAccessibilityAudioCueWidget.hpp"
class UCanvasPanel;
class UImage;
class APawn;
class UObject;
class UPhoenixGameSettings;
#pragma pack(push, 1)
class UBP_HUD_Audio_C : public UUIAccessibilityAudioCueWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UCanvasPanel* ArrowHolder; // 0x270
    UImage* Circle; // 0x278
    UCanvasPanel* CuePanel; // 0x280
    APawn* Player; // 0x288
    char pad_290[0x50];
    static UBP_HUD_Audio_C* StaticClass();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void HideHUD(UObject* Caller);
    void ShowHUD(UObject* Caller);
    void ExecuteUbergraph_BP_HUD_Audio(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue);
}; // Size: 0x2e0
#pragma pack(pop)
