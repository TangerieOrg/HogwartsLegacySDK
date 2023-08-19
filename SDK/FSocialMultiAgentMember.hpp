#pragma once
#include <cstdint>
#include "FSocialAgent.hpp"
#pragma pack(push, 1)
struct FSocialMultiAgentMember : public FSocialAgent {
    char pad_40[0x10];
}; // Size: 0x50
#pragma pack(pop)
