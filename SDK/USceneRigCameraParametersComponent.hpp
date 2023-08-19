#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class USceneRigCameraParametersComponent : public UActorComponent {
public:
    char pad_c8[0x58];
    static USceneRigCameraParametersComponent* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
