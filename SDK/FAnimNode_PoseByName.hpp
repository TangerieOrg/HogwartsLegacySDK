#pragma once
#include <cstdint>
#include "FAnimNode_PoseHandler.hpp"
#pragma pack(push, 1)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler {
    FName PoseName; // 0x80
    float PoseWeight; // 0x88
    char pad_8c[0xc];
}; // Size: 0x98
#pragma pack(pop)
