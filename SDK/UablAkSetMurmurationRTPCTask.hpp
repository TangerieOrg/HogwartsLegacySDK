#pragma once
#include <cstdint>
#include "EMurmurationValueType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablAkSetMurmurationRTPCTask : public UAblAbilityTask {
public:
    int32_t RTPC_Step; // 0x70
    char pad_74[0x4];
    FString RTPC_Name; // 0x78
    FName OnStartEventName; // 0x88
    FName OnEndEventName; // 0x90
    bool bPlayerOnly; // 0x98
    bool bDecay; // 0x99
    EMurmurationValueType RTPC_ValueType; // 0x9a
    char pad_9b[0x5];
    static UablAkSetMurmurationRTPCTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
