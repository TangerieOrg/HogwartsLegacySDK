#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
#pragma pack(push, 1)
class UTimeRigRelativeEvent : public UTimeRigEvent {
public:
    FTimeRigEventReference ParentReference; // 0x30
    FTimeRigCoordinate Offset; // 0x68
    char pad_6c[0x4];
    static UTimeRigRelativeEvent* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
