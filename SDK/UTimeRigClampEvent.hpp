#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigClampEvent : public UTimeRigEvent {
public:
    FTimeRigEventReference Input; // 0x30
    FTimeRigEventReference Minimum; // 0x68
    FTimeRigCoordinate MinimumOffset; // 0xa0
    char pad_a4[0x4];
    FTimeRigEventReference Maximum; // 0xa8
    FTimeRigCoordinate MaximumOffset; // 0xe0
    char pad_e4[0x4];
    static UTimeRigClampEvent* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
