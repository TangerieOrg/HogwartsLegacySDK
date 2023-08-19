#include "FDialogueSequenceReference.hpp"
#include "UStoryNode_DialogueSequence.hpp"
#include "UStoryNode_SceneRig.hpp"
UStoryNode_DialogueSequence* UStoryNode_DialogueSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StoryNode_DialogueSequence");
    return (UStoryNode_DialogueSequence*)res;
}
