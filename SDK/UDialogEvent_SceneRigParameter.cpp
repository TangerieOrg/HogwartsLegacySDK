#include "FSceneRigParameterBinding_FString.hpp"
#include "UDialogEvent_SceneRigParameter.hpp"
#include "UDialogueEvent_Direct.hpp"
UDialogEvent_SceneRigParameter* UDialogEvent_SceneRigParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogEvent_SceneRigParameter");
    return (UDialogEvent_SceneRigParameter*)res;
}
