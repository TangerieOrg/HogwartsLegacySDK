#pragma once
#include <cstdint>
#include "UNPC_PerceptionUpdate.hpp"
#pragma pack(push, 1)
class UEnemy_Target_PerceptionUpdate : public UNPC_PerceptionUpdate {
public:
    char pad_40[0xc0];
    static UEnemy_Target_PerceptionUpdate* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
