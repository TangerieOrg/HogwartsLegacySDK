#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeBase.hpp"
class UTargetTracker;
#pragma pack(push, 1)
class UTargetTypeFwdMoveLoop : public UTargetTypeBase {
public:
    static UTargetTypeFwdMoveLoop* StaticClass();
    static UTargetTypeBase* AddTarget_FwdMoveLoop(UTargetTracker* TargetTracker, ETargetID::Type InTargetID);
}; // Size: 0x38
#pragma pack(pop)
