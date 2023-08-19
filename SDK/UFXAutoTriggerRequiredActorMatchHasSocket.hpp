#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorMatchHasSocket : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    FName SocketName; // 0x28
    bool bSearchAllChildComponents; // 0x30
    char pad_31[0x7];
    static UFXAutoTriggerRequiredActorMatchHasSocket* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
