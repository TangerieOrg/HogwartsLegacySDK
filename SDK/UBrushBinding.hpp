#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UBrushBinding : public UPropertyBinding {
public:
    char pad_60[0x8];
    static UBrushBinding* StaticClass();
    FSlateBrush GetValue();
}; // Size: 0x68
#pragma pack(pop)
