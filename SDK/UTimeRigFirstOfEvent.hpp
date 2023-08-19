#pragma once
#include <cstdint>
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigFirstOfEvent : public UTimeRigEvent {
public:
    TArray<FTimeRigEventReference> InputEventReferences; // 0x30
    static UTimeRigFirstOfEvent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
