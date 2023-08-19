#include "FCooldownPickupData.hpp"
#include "FCooldownPickupImpulse.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHealingFX.hpp"
#include "FPhysicsReactionGroup.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UDataAsset.hpp"
#include "UDataTable.hpp"
#include "UFieldSystem.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMaterialPropertyData.hpp"
#include "UMultiFX2_Base.hpp"
#include "UObjectStateInfoData.hpp"
#include "UParticleSystem.hpp"
UObjectStateInfoData* UObjectStateInfoData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateInfoData");
    return (UObjectStateInfoData*)res;
}
