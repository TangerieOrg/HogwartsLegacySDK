#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EMountTransitionAnimState.hpp"
class UClass;
class USkeletalMesh;
class ACharacter;
class ACreature_Character;
class UMaterialPermuterLoadingBundle;
#pragma pack(push, 1)
class ACreatureMountTransitionActor : public AActor {
public:
    UClass* PlayerMountAbility_Start; // 0x248
    UClass* PlayerMountAbility_Cancel; // 0x250
    UClass* PlayerMountAbility_Standing; // 0x258
    UClass* PlayerMountAbility_Trot; // 0x260
    UClass* PlayerMountAbility_Standing_End_Partial; // 0x268
    UClass* PlayerMountAbility_Trot_End_Partial; // 0x270
    UClass* CreatureAbility_Standing_FromBag; // 0x278
    UClass* CreatureAbility_Trot_FromBag; // 0x280
    UClass* PlayerDismountAbility_Standing_Start; // 0x288
    UClass* PlayerDismountAbility_Trot_Start; // 0x290
    UClass* PlayerDismountAbility_Standing; // 0x298
    UClass* PlayerDismountAbility_Trot; // 0x2a0
    UClass* PlayerDismountAbility_End; // 0x2a8
    UClass* CreatureAbility_Standing_ToBag; // 0x2b0
    UClass* CreatureAbility_Trot_ToBag; // 0x2b8
    EMountTransitionAnimState MountTransitionAnimState; // 0x2c0
    bool bUseCreatureMountBagVFX; // 0x2c1
    char pad_2c2[0x6];
    UClass* MountSkinFXPreload; // 0x2c8
    USkeletalMesh* MountSkinFXPreloadMesh; // 0x2d0
    char pad_2d8[0xa0];
    ACharacter* RiderCharacter; // 0x378
    ACreature_Character* CreatureCharacter; // 0x380
    char pad_388[0x28];
    UMaterialPermuterLoadingBundle* SkinFXLoadingBundle; // 0x3b0
    char pad_3b8[0x8];
    static ACreatureMountTransitionActor* StaticClass();
    void OnKnockdownDismountStart();
    void OnKnockdownDismountEndCallback();
    void OnCreatureOutOfBagStart();
    void OnCreatureOutOfBagEnd();
    void OnCreatureIntoBagStart();
    void OnCreatureIntoBagEnd();
}; // Size: 0x3c0
#pragma pack(pop)
