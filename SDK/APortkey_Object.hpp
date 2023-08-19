#pragma once
#include <cstdint>
#include "APickupTool.hpp"
class AActor;
class UStaticMesh;
class APortkey_Base;
#pragma pack(push, 1)
class APortkey_Object : public APickupTool {
public:
    AActor* ActorOwner; // 0x308
    UStaticMesh* Portkey_Mesh; // 0x310
    APortkey_Base* PortkeyBase; // 0x318
    static APortkey_Object* StaticClass();
    void EndTeleport();
}; // Size: 0x320
#pragma pack(pop)
