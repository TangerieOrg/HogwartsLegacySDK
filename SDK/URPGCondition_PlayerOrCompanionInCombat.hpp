#pragma once
#include <cstdint>
#include "URPGCondition.hpp"
#pragma pack(push, 1)
class URPGCondition_PlayerOrCompanionInCombat : public URPGCondition {
public:
    static URPGCondition_PlayerOrCompanionInCombat* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
