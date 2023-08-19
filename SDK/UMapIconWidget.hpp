#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UMapIconWidget : public UUserWidget {
public:
    UPhoenixTextBlock* IconName; // 0x268
    UImage* RegionBorder; // 0x270
    char pad_278[0x10];
    static UMapIconWidget* StaticClass();
    void PlayFanfare_Event();
    float GetZoomFactor();
    float GetPitchFactor();
    float GetDistanceFromGround();
}; // Size: 0x288
#pragma pack(pop)
