#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionOnInput : public UAblBranchCondition {
public:
    TArray<FName> m_InputActions; // 0x30
    bool m_MustBeRecentlyPressed; // 0x40
    char pad_41[0x3];
    float m_RecentlyPressedTimeLimit; // 0x44
    static UAblBranchConditionOnInput* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
