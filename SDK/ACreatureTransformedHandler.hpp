#pragma once
#include <cstdint>
#include "ACreatureMountHandler.hpp"
class UClass;
#pragma pack(push, 1)
class ACreatureTransformedHandler : public ACreatureMountHandler {
public:
    UClass* RiderCharacterClass; // 0x5f0
    char pad_5f8[0x8];
    static ACreatureTransformedHandler* StaticClass();
}; // Size: 0x600
#pragma pack(pop)
