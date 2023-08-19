#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUDSEventQueuer;
#pragma pack(push, 1)
class UUDSStatManager : public UObject {
public:
    UUDSEventQueuer* UDSEventQueuer; // 0x28
    char pad_30[0x68];
    static UUDSStatManager* StaticClass();
    void HandleRealtimeMinutePassed();
    void HandleInGameDayPassed();
}; // Size: 0x98
#pragma pack(pop)
