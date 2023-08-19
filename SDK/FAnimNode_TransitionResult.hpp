#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#pragma pack(push, 1)
struct FAnimNode_TransitionResult : public FAnimNode_Base {
    bool bCanEnterTransition; // 0x10
    char pad_11[0x17];
}; // Size: 0x28
#pragma pack(pop)
