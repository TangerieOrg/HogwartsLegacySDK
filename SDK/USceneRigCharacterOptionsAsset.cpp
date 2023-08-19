#include "EAnimationDirectionSource.hpp"
#include "ECharacterOptionsCollisionResponse.hpp"
#include "EControlBehaviors.hpp"
#include "ELeftArmState\Type.hpp"
#include "EManagedMovementModePriority.hpp"
#include "ERightArmState\Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "UBoolProvider.hpp"
#include "UDataAsset.hpp"
#include "UIntProvider.hpp"
#include "USceneRigCharacterOptionsAsset.hpp"
USceneRigCharacterOptionsAsset* USceneRigCharacterOptionsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigCharacterOptionsAsset");
    return (USceneRigCharacterOptionsAsset*)res;
}
