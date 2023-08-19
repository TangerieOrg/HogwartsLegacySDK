#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_SanctuaryLoadZone : public USceneRigActionState {
public:
    static USceneActionState_SanctuaryLoadZone* StaticClass();
    void OnZoneLoadedAndVisible();
}; // Size: 0x50
#pragma pack(pop)
