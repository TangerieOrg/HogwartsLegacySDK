#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UConsoleVariableLienSystem : public UObject {
public:
    char pad_28[0x18];
    static UConsoleVariableLienSystem* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
