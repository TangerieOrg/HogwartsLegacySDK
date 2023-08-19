#pragma once
#include <cstdint>
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigFractionEvent : public UTimeRigEvent {
public:
    FTimeRigEventReference StartReference; // 0x30
    FTimeRigEventReference FinishReference; // 0x68
    float Fraction; // 0xa0
    char pad_a4[0x4];
    static UTimeRigFractionEvent* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
