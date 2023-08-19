#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UNiagaraMergeable : public UObject {
public:
    static UNiagaraMergeable* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
