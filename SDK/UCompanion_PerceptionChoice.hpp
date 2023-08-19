#pragma once
#include <cstdint>
#include "UEnemy_PerceptionChoice.hpp"
#pragma pack(push, 1)
class UCompanion_PerceptionChoice : public UEnemy_PerceptionChoice {
public:
    static UCompanion_PerceptionChoice* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
