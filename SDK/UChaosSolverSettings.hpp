#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UChaosSolverSettings : public UDeveloperSettings {
public:
    char pad_38[0x8];
    FSoftClassPath DefaultChaosSolverActorClass; // 0x40
    static UChaosSolverSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
