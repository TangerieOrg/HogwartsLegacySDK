#pragma once
#include <cstdint>
#include "UEnemy_QBUpdate.hpp"
#pragma pack(push, 1)
class UEnemy_POI_QBUpdate : public UEnemy_QBUpdate {
public:
    char pad_50[0x8];
    static UEnemy_POI_QBUpdate* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
