#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
class UObjectStateComponent;
#pragma pack(push, 1)
class AInteractiveObjectActor : public APhoenixBudgetedActor {
public:
    char pad_268[0x8];
    UObjectStateComponent* ObjectState; // 0x270
    char pad_278[0x20];
    static AInteractiveObjectActor* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
