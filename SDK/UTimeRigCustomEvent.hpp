#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigCustomEvent : public UTimeRigEvent {
public:
    char pad_30[0x8];
    FName CustomEventName; // 0x38
    FTimeRigCoordinate DefaultOffset; // 0x40
    char pad_44[0x4];
    static UTimeRigCustomEvent* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
