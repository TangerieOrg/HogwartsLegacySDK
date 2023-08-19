#pragma once
#include <cstdint>
#include "FCameraStackOperationState.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_CameraStackModification : public USceneRigObjectActionState {
public:
    TArray<FCameraStackOperationState> OperationStates; // 0x70
    static USceneActionState_CameraStackModification* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
