#include "FSceneRigDialogTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#include "USceneRigParameterDefinition_DialogueEvent.hpp"
USceneRigParameterDefinition_DialogueEvent* USceneRigParameterDefinition_DialogueEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigParameterDefinition_DialogueEvent");
    return (USceneRigParameterDefinition_DialogueEvent*)res;
}
