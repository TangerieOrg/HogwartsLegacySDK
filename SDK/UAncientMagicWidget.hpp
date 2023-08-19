#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
#pragma pack(push, 1)
class UAncientMagicWidget : public UUserWidget {
public:
    UImage* Reticule; // 0x268
    static UAncientMagicWidget* StaticClass();
    void ShowDiscoverProgressButton(bool Show);
    void SetReticuleScale(float Scale);
    void SetProgress(float Progress);
}; // Size: 0x270
#pragma pack(pop)
