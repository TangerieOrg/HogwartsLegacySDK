#pragma once
#include <cstdint>
#include "EInstallManagerState.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UInstallManagerProgressBar.hpp"
class UCanvasPanel;
class UPhoenixTextBlock;
class UProgressBar;
class UUI_BP_MenuTextButton_C;
#pragma pack(push, 1)
class UUI_BP_InstallManagerProgressBar_C : public UInstallManagerProgressBar {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x270
    UCanvasPanel* InstallingPanel; // 0x278
    UPhoenixTextBlock* InstallMessageText; // 0x280
    UProgressBar* InstallProgressBar; // 0x288
    UCanvasPanel* PendingInstallPanel; // 0x290
    UUI_BP_MenuTextButton_C* StartInstallButton; // 0x298
    ESlateVisibility ShowInstalling; // 0x2a0
    ESlateVisibility ShowPending; // 0x2a1
    ESlateVisibility ShowText; // 0x2a2
    char pad_2a3[0x5];
    static UUI_BP_InstallManagerProgressBar_C* StaticClass();
    void BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_BP_InstallManagerProgressBar(int32_t EntryPoint, float CallFunc_GetInstallPercentage_ReturnValue, FString CallFunc_GetInstallMessageText_ReturnValue, EInstallManagerState CallFunc_GetInstallManagerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
}; // Size: 0x2a8
#pragma pack(pop)
