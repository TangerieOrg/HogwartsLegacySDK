#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UUI_BPI_SubtitleHUD_C : public UInterface {
public:
    static UUI_BPI_SubtitleHUD_C* StaticClass();
    void GetSubtitleHUD(UUserWidget*& SubtitleHUD);
}; // Size: 0x28
#pragma pack(pop)
