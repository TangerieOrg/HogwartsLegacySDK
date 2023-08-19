#pragma once
#include <cstdint>
#include "EAlohomoraLevel.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAlohomoraLevelHelper : public UObject {
public:
    static UAlohomoraLevelHelper* StaticClass();
    static void SwitchAlohomoraLevel(EAlohomoraLevel& AlohomoraLevel);
    static void SetAlohomoraLevel(EAlohomoraLevel AlohomoraLevel);
    static bool IsAlohomoraLevel(EAlohomoraLevel AlohomoraLevel);
    static EAlohomoraLevel GetAlohomoraLevel();
}; // Size: 0x28
#pragma pack(pop)
