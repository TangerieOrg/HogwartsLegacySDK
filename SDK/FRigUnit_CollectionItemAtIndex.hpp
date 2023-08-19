#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase {
    FRigElementKeyCollection Collection; // 0x8
    int32_t Index; // 0x18
    FRigElementKey Item; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
