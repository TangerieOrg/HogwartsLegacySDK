#pragma once
#include <cstdint>
#include "UNPC_PerceptionUpdate.hpp"
#pragma pack(push, 1)
class UNPC_GameEvent_PerceptionUpdate : public UNPC_PerceptionUpdate {
public:
    static UNPC_GameEvent_PerceptionUpdate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
