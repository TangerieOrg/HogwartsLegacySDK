#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UMercunaQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Mercuna_Project : public UMercunaQueryTest {
public:
    FAIDataProviderFloatValue MaxSearchRadius; // 0x1f8
    static UEnvQueryTest_Mercuna_Project* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
