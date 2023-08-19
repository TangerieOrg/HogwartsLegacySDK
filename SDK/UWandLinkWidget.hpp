#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "EWandLinkInputType.hpp"
#include "EWandLinkMiniGameType.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UWandLinkWidget : public UUserWidget {
public:
    bool bUsingKeyboard; // 0x268
    char pad_269[0x1f];
    static UWandLinkWidget* StaticClass();
    void SuccessMeterFilled(EWandLinkInputType InputType, EWandLinkInputType SuccessInputType, EWandLinkMiniGameType MiniGameType);
    void SuccessButtonPressed(EWandLinkInputType InputType, EWandLinkInputType SuccessInputType, EWandLinkMiniGameType MiniGameType);
    void SuccessButtonFailed(EWandLinkInputType InputType, EWandLinkInputType SuccessInputType, EWandLinkMiniGameType MiniGameType);
    void Start();
    void SetMiniGameVisibility(EWandLinkMiniGameType MiniGameType, ESlateVisibility InVisibility);
    void SetButtonVisibility(EWandLinkInputType InputType, ESlateVisibility InVisibility);
    float GetWandLinkPercentage();
    float GetSuccessRatio();
    void End();
}; // Size: 0x288
#pragma pack(pop)
