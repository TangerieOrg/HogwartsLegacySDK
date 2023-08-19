#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UHeaderWidget;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UPausePopoutWidget : public UUserWidget {
public:
    UHeaderWidget* PopoutHeader; // 0x268
    UPhoenixTextBlock* PopoutDescription; // 0x270
    UPhoenixTextBlock* LegendText; // 0x278
    static UPausePopoutWidget* StaticClass();
    void SetPopoutData();
    void OnPopoutDataSet();
}; // Size: 0x280
#pragma pack(pop)
