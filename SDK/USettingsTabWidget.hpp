#pragma once
#include <cstdint>
#include "UTabPageWidget.hpp"
#pragma pack(push, 1)
class USettingsTabWidget : public UTabPageWidget {
public:
    bool NeedsExitConfirmed; // 0x3c8
    char pad_3c9[0x7];
    FString ConfirmExitTitle; // 0x3d0
    FString ConfirmExitDesc; // 0x3e0
    static USettingsTabWidget* StaticClass();
    void InitForSettingsLocation(bool IsInFieldGuide);
}; // Size: 0x3f0
#pragma pack(pop)
