#pragma once
#include <cstdint>
#include "FMapDebugPane.hpp"
#include "UObject.hpp"
class UUserWidget;
class UClass;
#pragma pack(push, 1)
class UDebugTextPanel : public UObject {
public:
    char pad_28[0x10];
    UUserWidget* DebugTextPanel; // 0x38
    FMapDebugPane DebugPanelInfo; // 0x40
    UClass* MapDebugWidgetClass; // 0xb0
    char pad_b8[0x20];
    static UDebugTextPanel* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
