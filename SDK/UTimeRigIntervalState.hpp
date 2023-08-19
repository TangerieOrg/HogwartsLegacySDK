#pragma once
#include <cstdint>
#include "UTimeRigElementState.hpp"
#pragma pack(push, 1)
class UTimeRigIntervalState : public UTimeRigElementState {
public:
    char pad_48[0x8];
    static UTimeRigIntervalState* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
