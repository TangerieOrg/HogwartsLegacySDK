#pragma once
#include <cstdint>
#include "FConfundoData.hpp"
#include "UStateEffectComponent.hpp"
#pragma pack(push, 1)
class UConfundoComponent : public UStateEffectComponent {
public:
    FConfundoData ConfundoData; // 0x190
    char pad_1a8[0x10];
    static UConfundoComponent* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
