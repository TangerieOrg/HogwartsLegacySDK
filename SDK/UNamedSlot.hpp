#pragma once
#include <cstdint>
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class UNamedSlot : public UContentWidget {
public:
    char pad_120[0x10];
    static UNamedSlot* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
