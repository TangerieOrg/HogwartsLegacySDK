#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "FVector.hpp"
#include "UTargetTypeActor.hpp"
class UTargetTracker;
class UTargetTypeBase;
#pragma pack(push, 1)
class UTargetTypeDodgeDuck : public UTargetTypeActor {
public:
    FVector OriginalDirection; // 0x60
    float AngleOffset; // 0x6c
    static UTargetTypeDodgeDuck* StaticClass();
    static UTargetTypeBase* AddTarget_DodgeDuck(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, bool bUseCameraDirectionAlways);
}; // Size: 0x70
#pragma pack(pop)
