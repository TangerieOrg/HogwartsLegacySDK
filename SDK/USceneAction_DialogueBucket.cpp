#include "FAudioDialogueFlags.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "UDialogueEventProvider.hpp"
#include "UFloatProvider.hpp"
#include "USceneAction_DialogueBucket.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_DialogueBucket* USceneAction_DialogueBucket::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DialogueBucket");
    return (USceneAction_DialogueBucket*)res;
}
