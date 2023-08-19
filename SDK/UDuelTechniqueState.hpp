#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDuelTechniqueState : public UObject {
public:
    char pad_28[0x140];
    static UDuelTechniqueState* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
