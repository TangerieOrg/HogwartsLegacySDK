#pragma once
#include <cstdint>
#include "FPortraitPaintingComponentStates.hpp"
#include "FTransform.hpp"
#include "UActorComponent.hpp"
class UMaterialPermuterLoadingBundle;
class AActor;
class UMaterialSwap;
class UScheduledEntity;
#pragma pack(push, 1)
class UPortraitPaintingEntityComponent : public UActorComponent {
public:
    TArray<void*> PortraitActors; // 0xc8
    char pad_d8[0x8];
    UMaterialPermuterLoadingBundle* MaterialBundle; // 0xe0
    UMaterialSwap* MaterialSwap; // 0xe8
    FTransform OriginalTransform; // 0xf0
    FPortraitPaintingComponentStates ComponentStates; // 0x120
    char pad_170[0x8];
    uint8_t bOverrodeMeshStates : 1; // 0x178
    uint8_t bOverrodeMovementMode : 1; // 0x178
    uint8_t bNudgedAudio : 1; // 0x178
    uint8_t bNudgedCognitionStimuliSourceComponent : 1; // 0x178
    uint8_t bAddedDoNotInvestigate : 1; // 0x178
    uint8_t bAddedNoWeatherSwap : 1; // 0x178
    uint8_t pad_bitfield_178_6 : 2;
    char pad_179[0x7];
    static UPortraitPaintingEntityComponent* StaticClass();
    void OnFleshDestroyed(AActor* Actor, UScheduledEntity* entity);
    void OnCharacterAddOnMeshesChanged(AActor* Actor);
}; // Size: 0x180
#pragma pack(pop)
