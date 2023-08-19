#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UClass;
#pragma pack(push, 1)
struct FComponentKey {
    UClass* OwnerClass; // 0x0
    FName SCSVariableName; // 0x8
    FGuid AssociatedGuid; // 0x10
}; // Size: 0x20
#pragma pack(pop)
