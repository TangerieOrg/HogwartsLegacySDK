#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class USpacer : public UWidget {
public:
    FVector2D Size; // 0x108
    char pad_110[0x10];
    static USpacer* StaticClass();
    void SetSize(FVector2D InSize);
}; // Size: 0x120
#pragma pack(pop)
