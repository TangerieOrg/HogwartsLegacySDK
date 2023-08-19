#pragma once
#include <cstdint>
#include "UTimeSource.hpp"
#pragma pack(push, 1)
class UTimeSourceVolume : public UTimeSource {
public:
    static UTimeSourceVolume* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
