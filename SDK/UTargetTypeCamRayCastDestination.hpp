#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeBase.hpp"
class UTargetTracker;
#pragma pack(push, 1)
class UTargetTypeCamRayCastDestination : public UTargetTypeBase {
public:
    static UTargetTypeCamRayCastDestination* StaticClass();
    static UTargetTypeBase* AddTarget_CamRayCastDestination(UTargetTracker* TargetTracker, ETargetID::Type InTargetID);
}; // Size: 0x38
#pragma pack(pop)
