#pragma once
#include <cstdint>
#include "UFXUpdate.hpp"
class AActor;
#pragma pack(push, 1)
class UFXUpdate_EndWhenMovementStops : public UFXUpdate {
public:
    static UFXUpdate_EndWhenMovementStops* StaticClass();
    void MovementStopped(AActor* InActor);
}; // Size: 0x28
#pragma pack(pop)
