#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UPopoutWidget : public UUserWidget {
public:
    UPhoenixTextBlock* PopoutWidgetTEST; // 0x268
    static UPopoutWidget* StaticClass();
    void OnSynchronizeProperties();
}; // Size: 0x270
#pragma pack(pop)
