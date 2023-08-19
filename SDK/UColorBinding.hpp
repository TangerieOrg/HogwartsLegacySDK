#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UColorBinding : public UPropertyBinding {
public:
    char pad_60[0x8];
    static UColorBinding* StaticClass();
    FSlateColor GetSlateValue();
    FLinearColor GetLinearValue();
}; // Size: 0x68
#pragma pack(pop)
