#pragma once
#include <cstdint>
#include "UObject.hpp"
class UEnvQueryGenerator;
class UEnvQueryTest;
#pragma pack(push, 1)
class UEnvQueryOption : public UObject {
public:
    UEnvQueryGenerator* Generator; // 0x28
    TArray<UEnvQueryTest*> Tests; // 0x30
    static UEnvQueryOption* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
