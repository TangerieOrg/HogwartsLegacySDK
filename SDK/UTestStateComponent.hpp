#pragma once
#include <cstdint>
#include "FObjectStateData.hpp"
#include "FRepairData.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UTestStateComponent : public UActorComponent {
public:
    FObjectStateData ObjectStateData; // 0xc8
    FRepairData RepairData; // 0x160
    static UTestStateComponent* StaticClass();
}; // Size: 0x398
#pragma pack(pop)
