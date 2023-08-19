#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigSelfEvent : public UTimeRigEvent {
public:
    FTimeRigCoordinate Offset; // 0x30
    char pad_34[0x4];
    static UTimeRigSelfEvent* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
