#pragma once
#include <cstdint>
#include "ENPC_SelectionStates.hpp"
#pragma pack(push, 1)
struct FNPC_SelectionState {
    ENPC_SelectionStates StateType; // 0x0
    bool StateEnabled; // 0x1
    char pad_2[0x2];
    float StateValue; // 0x4
}; // Size: 0x8
#pragma pack(pop)
