#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USaveGame : public UObject {
public:
    static USaveGame* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
