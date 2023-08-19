#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#pragma pack(push, 1)
struct FAnimNode_StateMachine : public FAnimNode_Base {
    int32_t StateMachineIndexInClass; // 0x10
    int32_t MaxTransitionsPerFrame; // 0x14
    bool bSkipFirstUpdateTransition; // 0x18
    bool bReinitializeOnBecomingRelevant; // 0x19
    char pad_1a[0x96];
}; // Size: 0xb0
#pragma pack(pop)
