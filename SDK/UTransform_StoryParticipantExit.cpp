#include "UTransformProvider.hpp"
#include "UTransform_StoryParticipantExit.hpp"
UTransform_StoryParticipantExit* UTransform_StoryParticipantExit::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_StoryParticipantExit");
    return (UTransform_StoryParticipantExit*)res;
}
