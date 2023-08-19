#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInputToGameLogic : public UObject {
public:
    char pad_28[0x8];
    static UInputToGameLogic* StaticClass();
    void InputFlushed();
}; // Size: 0x30
#pragma pack(pop)
