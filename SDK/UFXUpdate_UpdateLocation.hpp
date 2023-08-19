#pragma once
#include <cstdint>
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_UpdateLocation : public UFXUpdate_Tick {
public:
    bool bUpdateXY; // 0x80
    bool bUpdateZ; // 0x81
    char pad_82[0x6];
    static UFXUpdate_UpdateLocation* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
