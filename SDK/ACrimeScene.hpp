#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#pragma pack(push, 1)
class ACrimeScene : public AWorldObject {
public:
    static ACrimeScene* StaticClass();
    static void GlobalEnableCrime(bool i_Enable);
}; // Size: 0x2b0
#pragma pack(pop)
