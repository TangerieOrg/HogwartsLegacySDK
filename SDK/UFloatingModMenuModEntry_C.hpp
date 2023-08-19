#pragma once
#include <cstdint>
#include "FModData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UTextBlock;
class UCheckBox;
class UButton;
class APhoenixGameMode;
class APhoenix_Game_Mode_C;
#pragma pack(push, 1)
class UFloatingModMenuModEntry_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UTextBlock* ModNameTextBlock; // 0x270
    UCheckBox* ModToggle; // 0x278
    UButton* RemoveButton; // 0x280
    UTextBlock* RemoveText; // 0x288
    FString ModName; // 0x290
    static UFloatingModMenuModEntry_C* StaticClass();
    void BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature();
    void Construct0();
    void UpdateState();
    void BndEvt__FloatingModMenuModEntry_ModToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_FloatingModMenuModEntry(int32_t EntryPoint, APhoenixGameMode* CallFunc_GetPhoenixGameMode_ReturnValue, APhoenix_Game_Mode_C* K2Node_DynamicCast_AsPhoenix_Game_Mode, bool K2Node_DynamicCast_bSuccess, FModData CallFunc_GetModData_ModData, bool CallFunc_GetModData_Exists, bool K2Node_ComponentBoundEvent_bIsChecked, APhoenixGameMode* CallFunc_GetPhoenixGameMode_ReturnValue_1, APhoenix_Game_Mode_C* K2Node_DynamicCast_AsPhoenix_Game_Mode_1, bool K2Node_DynamicCast_bSuccess_1, APhoenixGameMode* CallFunc_GetPhoenixGameMode_ReturnValue_2, APhoenix_Game_Mode_C* K2Node_DynamicCast_AsPhoenix_Game_Mode_2, bool K2Node_DynamicCast_bSuccess_2);
}; // Size: 0x2a0
#pragma pack(pop)
