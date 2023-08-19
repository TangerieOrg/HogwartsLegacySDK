#pragma once
#include <cstdint>
#include "UEnemy_QBUpdate.hpp"
class UEnvQuery;
#pragma pack(push, 1)
class UEnemy_Cover_QBUpdate : public UEnemy_QBUpdate {
public:
    UEnvQuery* CoverQuery; // 0x50
    char pad_58[0x38];
    static UEnemy_Cover_QBUpdate* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
