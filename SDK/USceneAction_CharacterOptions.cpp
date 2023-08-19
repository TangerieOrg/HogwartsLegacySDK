#include "EAnimationDirectionSource.hpp"
#include "ECharacterOptionsCollisionResponse.hpp"
#include "EControlBehaviors.hpp"
#include "ELeftArmState\Type.hpp"
#include "EManagedMovementModePriority.hpp"
#include "EOverrideNPCStateOnFinish.hpp"
#include "ERightArmState\Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "ESynchronizeMethod.hpp"
#include "UBoolProvider.hpp"
#include "UIntProvider.hpp"
#include "USceneAction_CharacterOptions.hpp"
#include "USceneRigCharacterOptionsAsset.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CharacterOptions* USceneAction_CharacterOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CharacterOptions");
    return (USceneAction_CharacterOptions*)res;
}
