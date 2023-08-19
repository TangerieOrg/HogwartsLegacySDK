#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UablPreStartMoveBodyLeanTask : public UAblAbilityTask {
public:
    FName PlayOnChannel; // 0x70
    UClass* BodyLeanAbilityClass; // 0x78
    static UablPreStartMoveBodyLeanTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
