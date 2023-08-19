#pragma once
#include <cstdint>
#include "UMercunaQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_Mercuna_NavRaycast : public UMercunaQueryTest {
public:
    UClass* Context; // 0x1f8
    static UEnvQueryTest_Mercuna_NavRaycast* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
