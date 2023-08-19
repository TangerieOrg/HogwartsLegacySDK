#pragma once
#include <cstdint>
#include "EKeyLayout.hpp"
#include "UControlMapperPlayerInput.hpp"
#pragma pack(push, 1)
class UPhoenixPlayerInput : public UControlMapperPlayerInput {
public:
    char pad_3b8[0x28];
    static UPhoenixPlayerInput* StaticClass();
    EKeyLayout GetKeyLayout();
    void ForceRebuildTransposedKeyMaps(bool bRestoreDefaults, EKeyLayout InCurrentLayout, EKeyLayout InNewLayout);
}; // Size: 0x3e0
#pragma pack(pop)
