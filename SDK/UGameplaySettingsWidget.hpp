#pragma once
#include <cstdint>
#include "UTabPageWidget.hpp"
#pragma pack(push, 1)
class UGameplaySettingsWidget : public UTabPageWidget {
public:
    static UGameplaySettingsWidget* StaticClass();
    void SuppressDifficultySetting();
}; // Size: 0x3c8
#pragma pack(pop)
