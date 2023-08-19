#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeActor.hpp"
class UTargetTracker;
class AActor;
class UTargetTypeBase;
#pragma pack(push, 1)
class UTargetTypeBroomSpline : public UTargetTypeActor {
public:
    static UTargetTypeBroomSpline* StaticClass();
    static UTargetTypeBase* AddTarget_BroomSpline(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, AActor* InTargetActor);
}; // Size: 0x60
#pragma pack(pop)
