#pragma once
#include <cstdint>
#include "UEnemy_AttackChoice.hpp"
#pragma pack(push, 1)
class USpiderSpawn_AttackChoice : public UEnemy_AttackChoice {
public:
    static USpiderSpawn_AttackChoice* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
