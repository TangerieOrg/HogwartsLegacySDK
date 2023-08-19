#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UObject;
#pragma pack(push, 1)
struct FMemberReference {
    UObject* MemberParent; // 0x0
    FString MemberScope; // 0x8
    FName MemberName; // 0x18
    FGuid MemberGuid; // 0x20
    bool bSelfContext; // 0x30
    bool bWasDeprecated; // 0x31
    char pad_32[0x6];
}; // Size: 0x38
#pragma pack(pop)
