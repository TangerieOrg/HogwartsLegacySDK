#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionAnimNotify : public UAblBranchCondition {
public:
    FName Name; // 0x30
    bool bResultIfNotifyDoesNotExist; // 0x38
    char pad_39[0x7];
    static UAblBranchConditionAnimNotify* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
