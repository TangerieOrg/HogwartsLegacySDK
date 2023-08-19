#pragma once
#include <cstdint>
#include "EUMGSequencePlayMode\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_Sparkels_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* SparkelApear_Swirl; // 0x270
    UWidgetAnimation* SparkelApear; // 0x278
    static UUI_BP_Sparkels_C* StaticClass();
    void SparkelAnimEvent(EUMGSequencePlayMode::Type PlayMode);
    void ExecuteUbergraph_UI_BP_Sparkels(int32_t EntryPoint, EUMGSequencePlayMode::Type K2Node_CustomEvent_PlayMode, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
