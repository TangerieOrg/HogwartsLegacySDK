#pragma once
#include <cstdint>
#include "FLightComponentStatesSaveData.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_LightComponentStates : public USceneRigObjectActionState {
public:
    FLightComponentStatesSaveData SaveData; // 0x70
    int32_t SavedData; // 0x80
    char pad_84[0x4];
    static USceneActionState_LightComponentStates* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
