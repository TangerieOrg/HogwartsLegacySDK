#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UHUDCompassIcon : public UUserWidget {
public:
    bool IsAnimating; // 0x268
    bool InElevationRange; // 0x269
    bool ShouldShowElevationHint; // 0x26a
    bool IsInPathedState; // 0x26b
    bool IsInLockedState; // 0x26c
    char pad_26d[0x3];
    static UHUDCompassIcon* StaticClass();
    void TogglePathingBorder(bool ShowBorder, FString OutlineIconName);
    void ToggleLockBadge(bool ShowLock);
    void ShowIndicatorArrow(bool ShouldShow);
    void ShowDistance(bool ShouldShow);
    void SetRotation(float Angle);
    void SetPulse(bool Enable);
    void SetIndicatorArrowRotation(float DegreeRot);
    void SetIconTextureByName(FString IconName, bool ShowPulse);
    void SetIconTexture(UTexture2D* Texture);
    void SetIconSize(FVector2D NewSize);
    void SetIconScale(float Scale);
    void SetIconOpacity(float Opacity);
    void SetElevationVisibility(ESlateVisibility NewVisibility);
    void SetElevationDistance(int32_t Distance);
    void SetDistanceValue(int32_t Distance);
    void SetCompassIconVisibility(ESlateVisibility NewVisibility);
    void SetCompassIconColorAndOpacity(FLinearColor NewColor);
}; // Size: 0x270
#pragma pack(pop)
