#include "AActor.hpp"
#include "FAnimationTrack.hpp"
#include "UAble_AnimInstance.hpp"
#include "UAnimSequence.hpp"
#include "UAnimationComponent.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "USceneActionState_StitchingEnter.hpp"
#include "USceneRigObjectActionState.hpp"
#include "USplineComponent.hpp"
USceneActionState_StitchingEnter* USceneActionState_StitchingEnter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_StitchingEnter");
    return (USceneActionState_StitchingEnter*)res;
}
