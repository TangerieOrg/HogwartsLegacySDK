#pragma once
#include <cstdint>
#include "UInputToGameLogic.hpp"
#pragma pack(push, 1)
class UAxisToGameLogic : public UInputToGameLogic {
public:
    char pad_30[0x20];
    static UAxisToGameLogic* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
