#pragma once
#include <cstdint>
#include "ECreatureNavLinkType.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblCreatureNavLinkCondition : public UAblBranchCondition {
public:
    ECreatureNavLinkType LinkType; // 0x30
    char pad_31[0x7];
    static UAblCreatureNavLinkCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
