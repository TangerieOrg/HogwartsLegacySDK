#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UFlyingBroomPhysics;
class UClass;
#pragma pack(push, 1)
class UFlightAutomationData : public UActorComponent {
public:
    UFlyingBroomPhysics* BroomPhysics; // 0xc8
    UClass* BroomItem; // 0xd0
    static UFlightAutomationData* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
