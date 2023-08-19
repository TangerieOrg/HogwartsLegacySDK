#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
class AActor;
#pragma pack(push, 1)
class ABaseDestructibleArmor : public APhoenixBudgetedActor {
public:
    static ABaseDestructibleArmor* StaticClass();
    void HandlePeeves(AActor* Other);
}; // Size: 0x268
#pragma pack(pop)
