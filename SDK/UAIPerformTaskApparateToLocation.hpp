#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class UClass;
class UScheduledEntity;
#pragma pack(push, 1)
class UAIPerformTaskApparateToLocation : public UAIPerformTaskBase {
public:
    UClass* ApparateOutAblAbility; // 0xe0
    char pad_e8[0x8];
    static UAIPerformTaskApparateToLocation* StaticClass();
    void OnApparateOutCompleted(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits);
}; // Size: 0xf0
#pragma pack(pop)
