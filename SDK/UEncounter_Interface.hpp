#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UEncounter_Interface : public UInterface {
public:
    static UEncounter_Interface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
