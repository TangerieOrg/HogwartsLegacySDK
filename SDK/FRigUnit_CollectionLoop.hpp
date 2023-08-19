#pragma once
#include <cstdint>
#include "FControlRigExecuteContext.hpp"
#include "FRigElementKey.hpp"
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_CollectionBaseMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable {
    FRigElementKeyCollection Collection; // 0x68
    FRigElementKey Item; // 0x78
    int32_t Index; // 0x84
    int32_t Count; // 0x88
    float Ratio; // 0x8c
    bool Continue; // 0x90
    char pad_91[0x7];
    FControlRigExecuteContext Completed; // 0x98
}; // Size: 0xf8
#pragma pack(pop)
