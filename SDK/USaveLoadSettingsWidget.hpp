#pragma once
#include <cstdint>
#include "USettingsTabWidget.hpp"
#pragma pack(push, 1)
class USaveLoadSettingsWidget : public USettingsTabWidget {
public:
    char pad_3f0[0x20];
    static USaveLoadSettingsWidget* StaticClass();
    bool RestartFromLastSave();
    void QuitGame();
    void ExitToMain();
    void ActivateHoverdrone();
}; // Size: 0x410
#pragma pack(pop)
