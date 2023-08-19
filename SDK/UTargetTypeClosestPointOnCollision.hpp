#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeLocation.hpp"
class UTargetTracker;
class AActor;
class UTargetTypeBase;
#pragma pack(push, 1)
class UTargetTypeClosestPointOnCollision : public UTargetTypeLocation {
public:
    char pad_48[0x18];
    static UTargetTypeClosestPointOnCollision* StaticClass();
    static UTargetTypeBase* AddTarget_ClosestPointOnCollision(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, AActor* InTargetActor);
}; // Size: 0x60
#pragma pack(pop)
