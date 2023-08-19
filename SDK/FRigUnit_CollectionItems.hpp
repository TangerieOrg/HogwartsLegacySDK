#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase {
    TArray<FRigElementKey> Items; // 0x8
    FRigElementKeyCollection Collection; // 0x18
}; // Size: 0x28
#pragma pack(pop)
