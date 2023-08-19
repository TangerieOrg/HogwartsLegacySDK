#pragma once
#include <cstdint>
#include "EAISenseNotifyType.hpp"
#include "UObject.hpp"
class UAIPerceptionSystem;
#pragma pack(push, 1)
class UAISense : public UObject {
public:
    float DefaultExpirationAge; // 0x28
    EAISenseNotifyType NotifyType; // 0x2c
    char pad_2d[0x3];
    uint8_t bWantsNewPawnNotification : 1; // 0x30
    uint8_t bAutoRegisterAllPawnsAsSources : 1; // 0x30
    uint8_t pad_bitfield_30_2 : 6;
    char pad_31[0x7];
    UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
    char pad_40[0x40];
    static UAISense* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
