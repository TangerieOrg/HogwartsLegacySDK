#include "FDialogueConversationReference.hpp"
#include "USceneActionState_DialogueBucket.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DialogueBucket* USceneActionState_DialogueBucket::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DialogueBucket");
    return (USceneActionState_DialogueBucket*)res;
}
