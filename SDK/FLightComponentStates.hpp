#pragma once
#include <cstdint>
class ULightComponentState;
#pragma pack(push, 1)
struct FLightComponentStates {
    TArray<ULightComponentState*> States; // 0x0
}; // Size: 0x10
#pragma pack(pop)
