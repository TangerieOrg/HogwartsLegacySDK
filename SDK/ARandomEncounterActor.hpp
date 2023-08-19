#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ARandomEncounterActor : public AActor {
public:
    char pad_248[0x90];
    static ARandomEncounterActor* StaticClass();
    bool IsActive();
    void ForceDeactivate();
    void ForceActivate();
}; // Size: 0x2d8
#pragma pack(pop)
