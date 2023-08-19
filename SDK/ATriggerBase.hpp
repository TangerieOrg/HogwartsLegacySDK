#pragma once
#include <cstdint>
#include "AActor.hpp"
class UShapeComponent;
#pragma pack(push, 1)
class ATriggerBase : public AActor {
public:
    UShapeComponent* CollisionComponent; // 0x248
    static ATriggerBase* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
