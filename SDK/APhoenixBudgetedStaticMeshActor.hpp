#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "ESignificanceBiasEnum.hpp"
#pragma pack(push, 1)
class APhoenixBudgetedStaticMeshActor : public AStaticMeshActor {
public:
    char pad_258[0x8];
    ESignificanceBiasEnum DefaultSignificanceBias; // 0x260
    bool bAllowRegistrationWithSignificanceManager; // 0x261
    char pad_262[0x6];
    static APhoenixBudgetedStaticMeshActor* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
