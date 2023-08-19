#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkinFXLibrary;
class USimpleDataSet;
#pragma pack(push, 1)
class ASkinFXSingleton : public AActor {
public:
    USkinFXLibrary* Library; // 0x248
    char pad_250[0x50];
    USimpleDataSet* DataDependencies; // 0x2a0
    char pad_2a8[0x30];
    bool bSignalledAllReady; // 0x2d8
    char pad_2d9[0x7];
    static ASkinFXSingleton* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
