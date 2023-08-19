#pragma once
#include <cstdint>
#include "ENPC_TurnAssistState.hpp"
#include "UNPC_TurnAssistStateChoice.hpp"
#pragma pack(push, 1)
class UForce_TASChoice : public UNPC_TurnAssistStateChoice {
public:
    ENPC_TurnAssistState ForcedState; // 0x28
    char pad_29[0x7];
    static UForce_TASChoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
