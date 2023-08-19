#pragma once
#include <cstdint>
#include "UTimeRigIntervalState.hpp"
#pragma pack(push, 1)
class UTimeRigGroupState : public UTimeRigIntervalState {
public:
    char pad_50[0x18];
    static UTimeRigGroupState* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
