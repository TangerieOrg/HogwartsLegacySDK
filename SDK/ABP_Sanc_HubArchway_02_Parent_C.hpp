#pragma once
#include <cstdint>
#include "ATransfigurationStructureBase.hpp"
class UCameraStackFramingLocationComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Sanc_HubArchway_02_Parent_C : public ATransfigurationStructureBase {
public:
    UCameraStackFramingLocationComponent* CameraStackFramingLocation; // 0x2a8
    USceneComponent* DefaultSceneRoot; // 0x2b0
    static ABP_Sanc_HubArchway_02_Parent_C* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
