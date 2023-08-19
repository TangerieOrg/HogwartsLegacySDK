#pragma once
#include <cstdint>
#include "UAblBranchConditionAnimNotify.hpp"
#pragma pack(push, 1)
class UablBranchConditionMountAnimNotify : public UAblBranchConditionAnimNotify {
public:
    bool bReturnTrueIfMount; // 0x40
    char pad_41[0x7];
    static UablBranchConditionMountAnimNotify* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
