#pragma once
#include <cstdint>
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UTextBinding : public UPropertyBinding {
public:
    char pad_60[0x8];
    static UTextBinding* StaticClass();
    void GetTextValue();
    FString GetStringValue();
}; // Size: 0x68
#pragma pack(pop)
