#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USlateSettings : public UObject {
public:
    bool bExplicitCanvasChildZOrder; // 0x28
    char pad_29[0x7];
    static USlateSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
