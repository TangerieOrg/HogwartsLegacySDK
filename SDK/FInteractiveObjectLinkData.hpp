#pragma once
#include <cstdint>
#include "EInteractiveAction.hpp"
#include "EInteractiveState.hpp"
#pragma pack(push, 1)
struct FInteractiveObjectLinkData {
    EInteractiveState m_startState; // 0x0
    EInteractiveState m_endState; // 0x1
    EInteractiveAction m_action; // 0x2
    char pad_3[0x1d];
}; // Size: 0x20
#pragma pack(pop)
