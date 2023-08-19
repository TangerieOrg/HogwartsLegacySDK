#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWidgetComponent;
class UUserWidget;
class UClass;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class AOnScreenObjectIndicator : public AActor {
public:
    UWidgetComponent* WidgetComponent; // 0x248
    UClass* IndicatorScreenWidgetClass; // 0x250
    UUserWidget* IndicatorScreenWidget; // 0x258
    UCanvasPanelSlot* OffscreenIndicatorHudSlot; // 0x260
    bool bOffscreen; // 0x268
    char pad_269[0x7];
    static AOnScreenObjectIndicator* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
