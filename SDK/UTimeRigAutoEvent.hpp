#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigAutoEvent : public UTimeRigEvent {
public:
    char pad_30[0x8];
    FTimeRigCoordinate DefaultOffset; // 0x38
    char pad_3c[0x4];
    static UTimeRigAutoEvent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
