#pragma once
#include <cstdint>
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase {
    FRigElementKeyCollection Collection; // 0x8
    int32_t Count; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
