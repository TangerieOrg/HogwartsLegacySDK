#pragma once
#include <cstdint>
#include "UInputToGameLogic.hpp"
#pragma pack(push, 1)
class UActionToGameLogic : public UInputToGameLogic {
public:
    char pad_30[0x10];
    static UActionToGameLogic* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
