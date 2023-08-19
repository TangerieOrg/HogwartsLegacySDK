#pragma once
#include <cstdint>
#include "ECameraFixupLayer.hpp"
#include "USceneRigObjectActionState.hpp"
class UCameraFixupOperationState;
#pragma pack(push, 1)
class USceneActionState_CameraFixup : public USceneRigObjectActionState {
public:
    ECameraFixupLayer Layer; // 0x70
    char pad_71[0x7];
    TArray<UCameraFixupOperationState*> FixupOperationStates; // 0x78
    bool FirstFrameRefresh; // 0x88
    char pad_89[0x7];
    static USceneActionState_CameraFixup* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
