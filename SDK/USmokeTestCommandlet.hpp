#pragma once
#include <cstdint>
#include "UCommandlet.hpp"
#pragma pack(push, 1)
class USmokeTestCommandlet : public UCommandlet {
public:
    static USmokeTestCommandlet* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
