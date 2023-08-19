#pragma once
#include <cstdint>
#include "UWidget.hpp"
#pragma pack(push, 1)
class UNativeWidgetHost : public UWidget {
public:
    char pad_108[0x10];
    static UNativeWidgetHost* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
