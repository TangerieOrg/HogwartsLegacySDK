#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCharacterShutdownProvider_Interface : public UInterface {
public:
    static UCharacterShutdownProvider_Interface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
