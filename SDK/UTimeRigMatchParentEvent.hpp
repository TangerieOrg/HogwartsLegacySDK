#pragma once
#include <cstdint>
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigMatchParentEvent : public UTimeRigEvent {
public:
    static UTimeRigMatchParentEvent* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
