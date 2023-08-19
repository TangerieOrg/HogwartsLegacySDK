#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "USceneRigActionState.hpp"
class USceneRig;
class USceneRigInstanceContext;
#pragma pack(push, 1)
class USceneActionState_EmbeddedSceneRig : public USceneRigActionState {
public:
    USceneRig* SceneRig; // 0x50
    USceneRigInstanceContext* InstanceContext; // 0x58
    static USceneActionState_EmbeddedSceneRig* StaticClass();
    void OnNamedEventChanged(FTimeRigCoordinate PreviousValue, FTimeRigCoordinate CurrentValue);
}; // Size: 0x60
#pragma pack(pop)
