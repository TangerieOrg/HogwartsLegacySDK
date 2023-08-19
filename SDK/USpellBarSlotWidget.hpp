#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
class UTexture2D;
#pragma pack(push, 1)
class USpellBarSlotWidget : public UUserWidget {
public:
    FString IconName; // 0x268
    UImage* slotIcon; // 0x278
    static USpellBarSlotWidget* StaticClass();
    void UpdateRechargeMaterial(UTexture2D* newSpellIcon);
    void SetSlotState(bool IsActive);
    void SetImage(FString ImageName);
    void OnSynchronizeProperties();
}; // Size: 0x280
#pragma pack(pop)
