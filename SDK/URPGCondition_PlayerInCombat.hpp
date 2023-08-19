#pragma once
#include <cstdint>
#include "URPGCondition.hpp"
#pragma pack(push, 1)
class URPGCondition_PlayerInCombat : public URPGCondition {
public:
    static URPGCondition_PlayerInCombat* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
