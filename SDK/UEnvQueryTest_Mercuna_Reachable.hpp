#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UMercunaQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_Mercuna_Reachable : public UMercunaQueryTest {
public:
    FAIDataProviderFloatValue MaxPathLength; // 0x1f8
    UClass* Context; // 0x230
    static UEnvQueryTest_Mercuna_Reachable* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
