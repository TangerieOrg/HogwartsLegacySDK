#pragma once
#include <cstdint>
#include "UEnemy_QBUpdate.hpp"
#pragma pack(push, 1)
class UEnemy_Combat_QBUpdate : public UEnemy_QBUpdate {
public:
    char pad_50[0x38];
    static UEnemy_Combat_QBUpdate* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
