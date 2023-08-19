#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ALightStatsSingleton : public AActor {
public:
    static ALightStatsSingleton* StaticClass();
}; // Size: 0x248
#pragma pack(pop)
