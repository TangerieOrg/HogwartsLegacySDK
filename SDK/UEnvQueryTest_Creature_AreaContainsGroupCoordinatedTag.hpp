#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Creature_AreaContainsGroupCoordinatedTag : public UEnvQueryTest {
public:
    FAIDataProviderFloatValue DetectionRange; // 0x1f8
    FName TagID; // 0x230
    bool bIgnoreQueryContextActor; // 0x238
    char pad_239[0x7];
    static UEnvQueryTest_Creature_AreaContainsGroupCoordinatedTag* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
