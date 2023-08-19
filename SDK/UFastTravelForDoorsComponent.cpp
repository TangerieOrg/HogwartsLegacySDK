#include "ADoor.hpp"
#include "EDoorFastTravelType.hpp"
#include "EFT_TravelType.hpp"
#include "FFastTravelLocationName.hpp"
#include "UActorComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFastTravelForDoorsComponent.hpp"
#include "USceneComponent.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
UFastTravelForDoorsComponent* UFastTravelForDoorsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelForDoorsComponent");
    return (UFastTravelForDoorsComponent*)res;
}
