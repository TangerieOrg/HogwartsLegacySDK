#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeBase.hpp"
class UTargetTracker;
#pragma pack(push, 1)
class UTargetTypeMoveAndIdle : public UTargetTypeBase {
public:
    static UTargetTypeMoveAndIdle* StaticClass();
    static UTargetTypeBase* AddTarget_MoveAndIdle(UTargetTracker* TargetTracker, ETargetID::Type InTargetID);
}; // Size: 0x38
#pragma pack(pop)
