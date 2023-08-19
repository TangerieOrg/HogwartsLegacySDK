#pragma once
#include <cstdint>
#include "UEnvQueryGenerator.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator {
public:
    UClass* QueryContext; // 0x50
    static UEnvQueryGenerator_CurrentLocation* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
