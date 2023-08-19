#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UActorComponent.hpp"
class ACreature_Character;
class UCreature_PathFollowingComponent;
#pragma pack(push, 1)
class UCreature_PathTeleportComponent : public UActorComponent {
public:
    FVector2D TeleportTimeSpacingRange; // 0xc8
    FVector2D TeleportDistanceRange; // 0xd0
    float PathEndBuffer; // 0xd8
    float TeleportFreeAreaTestRadius; // 0xdc
    float TeleportGroundLineCheckLength; // 0xe0
    float TeleportLocationUpOffset; // 0xe4
    ACreature_Character* CreatureCharacter; // 0xe8
    UCreature_PathFollowingComponent* CreaturePathFollowingComponent; // 0xf0
    char pad_f8[0x48];
    static UCreature_PathTeleportComponent* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
