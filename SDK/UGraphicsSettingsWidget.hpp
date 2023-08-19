#pragma once
#include <cstdint>
#include "USettingsTabWidget.hpp"
#pragma pack(push, 1)
class UGraphicsSettingsWidget : public USettingsTabWidget {
public:
    char pad_3f0[0x30];
    static UGraphicsSettingsWidget* StaticClass();
    void SyncDisplaySettings();
    void RevertVideoChanges();
    void AcceptVideoChanges();
}; // Size: 0x420
#pragma pack(pop)
