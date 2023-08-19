#pragma once
#include <cstdint>
#include "UObject.hpp"
class USlateWidgetStyleContainerBase;
#pragma pack(push, 1)
class USlateWidgetStyleAsset : public UObject {
public:
    USlateWidgetStyleContainerBase* CustomStyle; // 0x28
    static USlateWidgetStyleAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
