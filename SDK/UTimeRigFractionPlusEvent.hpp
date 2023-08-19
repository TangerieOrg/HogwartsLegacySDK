#pragma once
#include <cstdint>
#include "FTimeRigEventReference.hpp"
#include "UTimeRigEvent.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class UTimeRigFractionPlusEvent : public UTimeRigEvent {
public:
    FTimeRigEventReference StartReference; // 0x30
    FTimeRigEventReference FinishReference; // 0x68
    UFloatProvider* FractionProvider; // 0xa0
    static UTimeRigFractionPlusEvent* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
