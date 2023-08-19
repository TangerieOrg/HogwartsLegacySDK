#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UProgressBar;
#pragma pack(push, 1)
class UProgressBarWidget : public UUserWidget {
public:
    char pad_268[0x18];
    float ProgressPct; // 0x280
    char pad_284[0x4];
    UPhoenixTextBlock* Label; // 0x288
    UProgressBar* Progress; // 0x290
    static UProgressBarWidget* StaticClass();
    void SetProgress(float NewProgress);
    void SetLabel();
    void OnSynchronizeProperties();
}; // Size: 0x298
#pragma pack(pop)
