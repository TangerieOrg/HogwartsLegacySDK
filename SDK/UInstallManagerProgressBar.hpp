#pragma once
#include <cstdint>
#include "EInstallManagerState.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UInstallManagerProgressBar : public UUserWidget {
public:
    char pad_268[0x8];
    static UInstallManagerProgressBar* StaticClass();
    void StartPendingLoad();
    float GetInstallPercentage();
    FString GetInstallMessageText();
    EInstallManagerState GetInstallManagerState();
}; // Size: 0x270
#pragma pack(pop)
