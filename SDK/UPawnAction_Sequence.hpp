#pragma once
#include <cstdint>
#include "EPawnActionFailHandling\Type.hpp"
#include "UPawnAction.hpp"
#pragma pack(push, 1)
class UPawnAction_Sequence : public UPawnAction {
public:
    TArray<UPawnAction*> ActionSequence; // 0x90
    EPawnActionFailHandling::Type ChildFailureHandlingMode; // 0xa0
    char pad_a1[0x7];
    UPawnAction* RecentActionCopy; // 0xa8
    char pad_b0[0x8];
    static UPawnAction_Sequence* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
