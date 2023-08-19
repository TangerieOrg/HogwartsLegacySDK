#pragma once
#include <cstdint>
#include "FVanishmentEvent.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_VanishSurfaceObjects : public USceneRigActionBase {
public:
    FVanishmentEvent VanishmentEvent; // 0x88
    static USceneAction_VanishSurfaceObjects* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
