#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_SelectedBox_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* Desolve; // 0x270
    static UUI_BP_SelectedBox_C* StaticClass();
    void DesolveSelect();
    void AppearSelect();
    void ExecuteUbergraph_UI_BP_SelectedBox(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}; // Size: 0x278
#pragma pack(pop)
