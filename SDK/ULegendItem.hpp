#pragma once
#include <cstdint>
#include "EInputDeviceUsed.hpp"
#include "FLegendItemData.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class ULegendItem : public UPhoenixUserWidget {
public:
    char pad_328[0x10];
    FLegendItemData mLegendItemData; // 0x338
    bool mIsHolding; // 0x368
    char pad_369[0x3];
    float mProgress; // 0x36c
    bool mDisabledState; // 0x370
    char pad_371[0x3];
    float mHoldTimeRemaining; // 0x374
    char pad_378[0x8];
    static ULegendItem* StaticClass();
    void UpdateFillMeterStyle(EInputDeviceUsed UsedInputDevice);
    void StopHolding();
    void StartHolding();
    void SetTextColor(FSlateColor InColor);
    void SetProgressUsed(bool ProgressUsed);
    void SetProgress(float Progress);
    void SetLegendItemData(FLegendItemData& LegendItemData);
    void SetHoldDuration(float NewHoldDuration);
    void SetDisabledState(bool Disabled);
    void ProgressUsedChanged(bool ProgressUsed);
    void ProgressChanged(float Progress);
    void LegendItemHoldReleaseEvent__DelegateSignature(ULegendItem* LegendItem, bool HoldWasCompleted);
    void LegendItemDataChanged(FString ButtonString, FString TextString, bool TextStringIsLocalized);
    FLegendItemData GetLegendItemData();
    void DisabledStateChanged(bool Disabled);
}; // Size: 0x380
#pragma pack(pop)
