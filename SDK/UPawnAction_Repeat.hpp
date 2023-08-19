#pragma once
#include <cstdint>
#include "EPawnActionFailHandling\Type.hpp"
#include "UPawnAction.hpp"
#pragma pack(push, 1)
class UPawnAction_Repeat : public UPawnAction {
public:
    UPawnAction* ActionToRepeat; // 0x90
    UPawnAction* RecentActionCopy; // 0x98
    EPawnActionFailHandling::Type ChildFailureHandlingMode; // 0xa0
    char pad_a1[0xf];
    static UPawnAction_Repeat* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
