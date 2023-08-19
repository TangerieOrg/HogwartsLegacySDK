#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUserWidget;
#pragma pack(push, 1)
class ULocalizationDebuggerWindow : public UObject {
public:
    UUserWidget* Widget; // 0x28
    static ULocalizationDebuggerWindow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
