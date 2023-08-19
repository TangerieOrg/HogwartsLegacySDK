#pragma once
#include <cstdint>
#include "UNPC_QBUpdate.hpp"
#pragma pack(push, 1)
class UEnemy_QBUpdate : public UNPC_QBUpdate {
public:
    char pad_40[0x10];
    static UEnemy_QBUpdate* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
