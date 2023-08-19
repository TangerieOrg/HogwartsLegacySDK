#pragma once
#include <cstdint>
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase {
    FRigElementKeyCollection Collection; // 0x8
    FRigElementKeyCollection Reversed; // 0x18
}; // Size: 0x28
#pragma pack(pop)
