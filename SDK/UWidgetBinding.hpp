#pragma once
#include <cstdint>
#include "UPropertyBinding.hpp"
class UWidget;
#pragma pack(push, 1)
class UWidgetBinding : public UPropertyBinding {
public:
    static UWidgetBinding* StaticClass();
    UWidget* GetValue();
}; // Size: 0x60
#pragma pack(pop)
