#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeActor.hpp"
class UTargetTracker;
class AActor;
class UTargetTypeBase;
#pragma pack(push, 1)
class UTargetTypeAccio : public UTargetTypeActor {
public:
    static UTargetTypeAccio* StaticClass();
    static UTargetTypeBase* AddTarget_Accio(UTargetTracker* TargetTracker, AActor* InTargetActor, ETargetID::Type InTargetID);
}; // Size: 0x60
#pragma pack(pop)
