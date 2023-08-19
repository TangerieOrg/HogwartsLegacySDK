#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWidget;
#pragma pack(push, 1)
class UWidgetTree : public UObject {
public:
    UWidget* RootWidget; // 0x28
    static UWidgetTree* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
