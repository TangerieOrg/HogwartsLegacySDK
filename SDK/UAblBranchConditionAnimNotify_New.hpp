#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionAnimNotify_New : public UAblTaskCondition {
public:
    char pad_28[0x50];
    bool bResultIfNotifyDoesNotExist; // 0x78
    char pad_79[0x7];
    static UAblBranchConditionAnimNotify_New* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
