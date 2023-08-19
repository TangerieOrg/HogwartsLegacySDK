#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UPhoenixTextBlock;
class URichTextBlock;
class UPlayerMountOverlapManager;
#pragma pack(push, 1)
class UUI_BP_NoFlyHud_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UPhoenixTextBlock* ErrorMessage; // 0x2f0
    URichTextBlock* timeText; // 0x2f8
    bool NewVar_0; // 0x300
    char pad_301[0x7];
    static UUI_BP_NoFlyHud_C* StaticClass();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Show(FName& Error_Key);
    void Hide();
    void ExecuteUbergraph_UI_BP_NoFlyHud(int32_t EntryPoint, FName K2Node_CustomEvent_Error_Key, FString CallFunc_Conv_NameToString_ReturnValue, UPlayerMountOverlapManager* CallFunc_Get_ReturnValue, float CallFunc_GetTimeInNoMountZone_time, bool CallFunc_GetTimeInNoMountZone_ReturnValue);
}; // Size: 0x308
#pragma pack(pop)
