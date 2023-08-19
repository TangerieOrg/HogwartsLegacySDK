#pragma once
#include <cstdint>
#include "FTaskData.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UTrackingInfoWidget : public UUserWidget {
public:
    float DisplayDuration; // 0x268
    char pad_26c[0xc];
    static UTrackingInfoWidget* StaticClass();
    void OnDisplayInputReleased();
    bool GetIsExtended();
    bool GetIsDisplayed();
    void DisplayTrackerInfo(FString TrackerTitle, TArray<FTaskData>& TaskData, FString ExtendedDesc, FString IconName);
    void DisplayExtendedInfo();
    void CollapseTrackerInfo();
}; // Size: 0x278
#pragma pack(pop)
