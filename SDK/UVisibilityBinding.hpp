#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UVisibilityBinding : public UPropertyBinding {
public:
    static UVisibilityBinding* StaticClass();
    ESlateVisibility GetValue();
}; // Size: 0x60
#pragma pack(pop)
