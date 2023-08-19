#pragma once
#include <cstdint>
#include "UTimeRigEvent.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class UTimeRigSelfPlusEvent : public UTimeRigEvent {
public:
    UFloatProvider* OffsetProvider; // 0x30
    static UTimeRigSelfPlusEvent* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
