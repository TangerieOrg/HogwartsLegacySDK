#pragma once
#include <cstdint>
#include "FMultiFX2Handle.hpp"
#include "UFXUpdate.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UFXUpdate_Tick : public UFXUpdate {
public:
    float UpdateRate; // 0x28
    char pad_2c[0x54];
    static UFXUpdate_Tick* StaticClass();
    void Update(FMultiFX2Handle InHandle, UMultiFX2_Base* InMultiBase);
}; // Size: 0x80
#pragma pack(pop)
