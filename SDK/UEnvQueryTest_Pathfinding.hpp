#pragma once
#include <cstdint>
#include "EEnvTestPathfinding\Type.hpp"
#include "FAIDataProviderBoolValue.hpp"
#include "UEnvQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest {
public:
    EEnvTestPathfinding::Type TestMode; // 0x1f8
    char pad_1f9[0x7];
    UClass* Context; // 0x200
    FAIDataProviderBoolValue PathFromContext; // 0x208
    FAIDataProviderBoolValue SkipUnreachable; // 0x240
    UClass* FilterClass; // 0x278
    static UEnvQueryTest_Pathfinding* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
