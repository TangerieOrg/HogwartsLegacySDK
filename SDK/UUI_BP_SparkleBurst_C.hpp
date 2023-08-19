#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_SparkleBurst_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* SparkleBurst; // 0x270
    static UUI_BP_SparkleBurst_C* StaticClass();
    void PlaySparkleBurst(float PlaybackSpeed);
    void ExecuteUbergraph_UI_BP_SparkleBurst(int32_t EntryPoint, float K2Node_CustomEvent_PlaybackSpeed, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
}; // Size: 0x278
#pragma pack(pop)
