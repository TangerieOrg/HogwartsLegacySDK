#pragma once
#include <cstdint>
#include "UArrowComponent.hpp"
#pragma pack(push, 1)
class UCreaturePerchComponent : public UArrowComponent {
public:
    char pad_4a0[0x10];
    static UCreaturePerchComponent* StaticClass();
}; // Size: 0x4b0
#pragma pack(pop)
