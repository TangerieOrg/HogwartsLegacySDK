#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget_LockOnReticle.hpp"
class UPhoenixRichTextBlock;
class UUIManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_Oppugno_Indicator_C : public UUserWidget_LockOnReticle {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
    UPhoenixRichTextBlock* ButtonPrompt; // 0x2f8
    static UUI_BP_Oppugno_Indicator_C* StaticClass();
    void Construct();
    void ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int);
    void ExecuteUbergraph_UI_BP_Oppugno_Indicator(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetShouldShowButtonGraphics_ReturnValue);
}; // Size: 0x300
#pragma pack(pop)
