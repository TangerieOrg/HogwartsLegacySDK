#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeActor.hpp"
class UTargetTracker;
class UTargetTypeBase;
#pragma pack(push, 1)
class UTargetTypeAutoTargetOrDesiredDirection : public UTargetTypeActor {
public:
    static UTargetTypeAutoTargetOrDesiredDirection* StaticClass();
    static UTargetTypeBase* AddTarget_AutoTargetOrDesiredDirection(UTargetTracker* TargetTracker, ETargetID::Type InTargetID);
}; // Size: 0x60
#pragma pack(pop)
