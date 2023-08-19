#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UObject;
#pragma pack(push, 1)
struct FSimpleMemberReference {
    UObject* MemberParent; // 0x0
    FName MemberName; // 0x8
    FGuid MemberGuid; // 0x10
}; // Size: 0x20
#pragma pack(pop)
