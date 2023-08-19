#pragma once
#include <cstdint>
#include "UEnemy_QBUpdate.hpp"
#pragma pack(push, 1)
class UEnemy_Follow_QBUpdate : public UEnemy_QBUpdate {
public:
    char pad_50[0x10];
    static UEnemy_Follow_QBUpdate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
