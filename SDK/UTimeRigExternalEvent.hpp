#pragma once
#include <cstdint>
#include "ETimeRigExternalEventConstraint.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigExternalEvent : public UTimeRigEvent {
public:
    char pad_30[0x8];
    ETimeRigExternalEventConstraint Constraint; // 0x38
    char pad_39[0x3];
    float DefaultTime; // 0x3c
    static UTimeRigExternalEvent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
