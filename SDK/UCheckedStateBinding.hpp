#pragma once
#include <cstdint>
#include "ECheckBoxState.hpp"
#include "UPropertyBinding.hpp"
#pragma pack(push, 1)
class UCheckedStateBinding : public UPropertyBinding {
public:
    char pad_60[0x8];
    static UCheckedStateBinding* StaticClass();
    ECheckBoxState GetValue();
}; // Size: 0x68
#pragma pack(pop)
