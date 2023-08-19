#pragma once
#include <cstdint>
#include "EDoorFastTravelType.hpp"
#include "EFT_TravelType.hpp"
#include "FFastTravelLocationName.hpp"
#include "UActorComponent.hpp"
class USceneRig;
class ADoor;
class USceneRigPlayer;
class UCognitionStimuliSourceComponent;
class USceneComponent;
#pragma pack(push, 1)
class UFastTravelForDoorsComponent : public UActorComponent {
public:
    EDoorFastTravelType FastTravelDoorType; // 0xc8
    EFT_TravelType FastTravelType; // 0xc9
    char pad_ca[0x2];
    FFastTravelLocationName FastTravelLocation; // 0xcc
    FFastTravelLocationName FastTravelLocationBack; // 0xd4
    char pad_dc[0x4];
    FString DisplayNameFront; // 0xe0
    FString DisplayNameBack; // 0xf0
    USceneRig* FastTravelSceneRig; // 0x100
    float ChargeTime; // 0x108
    char pad_10c[0x4];
    USceneRigPlayer* SceneRigPlayer; // 0x110
    ADoor* Door; // 0x118
    USceneComponent* CalloutLocator; // 0x120
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x128
    char pad_130[0x20];
    static UFastTravelForDoorsComponent* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
