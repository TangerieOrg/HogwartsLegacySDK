#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESignificanceBiasEnum.hpp"
#pragma pack(push, 1)
class APhoenixBudgetedActor : public AActor {
public:
    char pad_248[0x18];
    ESignificanceBiasEnum DefaultSignificanceBias; // 0x260
    bool bAllowRegistrationWithSignificanceManager; // 0x261
    bool bAllowRegistrationWithLODBudgeter; // 0x262
    bool bAllowRegistrationWithClothBudgeter; // 0x263
    char pad_264[0x4];
    static APhoenixBudgetedActor* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
