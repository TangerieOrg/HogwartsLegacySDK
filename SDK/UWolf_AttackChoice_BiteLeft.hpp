#pragma once
#include <cstdint>
#include "UEnemy_AttackChoice.hpp"
#pragma pack(push, 1)
class UWolf_AttackChoice_BiteLeft : public UEnemy_AttackChoice {
public:
    static UWolf_AttackChoice_BiteLeft* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
