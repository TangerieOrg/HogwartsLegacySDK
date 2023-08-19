#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UScheduledEntity;
#pragma pack(push, 1)
class USceneActionState_PerformTaskFollowSpline : public USceneRigObjectActionState {
public:
    char pad_70[0x10];
    static USceneActionState_PerformTaskFollowSpline* StaticClass();
    void OnSplineCompleted(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits);
}; // Size: 0x80
#pragma pack(pop)
