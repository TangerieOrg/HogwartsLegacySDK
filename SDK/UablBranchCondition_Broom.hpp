#pragma once
#include <cstdint>
#include "EFlyingBroomState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UablBranchCondition_Broom : public UAblBranchCondition {
public:
    EFlyingBroomState::Type FlyingBroomCheckState; // 0x30
    char pad_31[0x7];
    static UablBranchCondition_Broom* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
