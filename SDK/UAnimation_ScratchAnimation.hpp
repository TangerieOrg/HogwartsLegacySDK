#pragma once
#include <cstdint>
#include "UAnimationProvider.hpp"
#pragma pack(push, 1)
class UAnimation_ScratchAnimation : public UAnimationProvider {
public:
    int32_t SelectedTake; // 0x28
    char pad_2c[0x4];
    static UAnimation_ScratchAnimation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
