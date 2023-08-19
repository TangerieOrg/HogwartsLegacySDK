#pragma once
#include <cstdint>
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class UTimeRigRelativePlusEvent : public UTimeRigEvent {
public:
    FTimeRigEventReference ParentReference; // 0x30
    UFloatProvider* OffsetProvider; // 0x68
    static UTimeRigRelativePlusEvent* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
