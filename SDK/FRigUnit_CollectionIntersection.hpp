#pragma once
#include <cstdint>
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase {
    FRigElementKeyCollection A; // 0x8
    FRigElementKeyCollection B; // 0x18
    FRigElementKeyCollection Collection; // 0x28
}; // Size: 0x38
#pragma pack(pop)
