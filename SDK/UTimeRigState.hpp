#pragma once
#include <cstdint>
#include "UTimeRigIntervalState.hpp"
#pragma pack(push, 1)
class UTimeRigState : public UTimeRigIntervalState {
public:
    char pad_50[0x28];
    static UTimeRigState* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
