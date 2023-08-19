#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Creature_CohesionWithActorsOfClass : public UEnvQueryTest {
public:
    FAIDataProviderFloatValue DetectionRange; // 0x1f8
    static UEnvQueryTest_Creature_CohesionWithActorsOfClass* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
