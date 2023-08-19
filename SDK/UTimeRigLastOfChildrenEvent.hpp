#pragma once
#include <cstdint>
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigLastOfChildrenEvent : public UTimeRigEvent {
public:
    static UTimeRigLastOfChildrenEvent* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
