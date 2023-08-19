#pragma once
#include <cstdint>
#include "FDebugPanelControl.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UDebugPanel : public UObject {
public:
    char pad_28[0x30];
    FDebugPanelControl Controls[4]; // 0x58
    bool bVisible; // 0x358
    char pad_359[0x7];
    static UDebugPanel* StaticClass();
}; // Size: 0x360
#pragma pack(pop)
