#pragma once
#include <cstdint>
#include "FWidgetNavigationData.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UWidgetNavigation : public UObject {
public:
    FWidgetNavigationData Up; // 0x28
    FWidgetNavigationData Down; // 0x4c
    FWidgetNavigationData Left; // 0x70
    FWidgetNavigationData Right; // 0x94
    FWidgetNavigationData Next; // 0xb8
    FWidgetNavigationData Previous; // 0xdc
    static UWidgetNavigation* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
