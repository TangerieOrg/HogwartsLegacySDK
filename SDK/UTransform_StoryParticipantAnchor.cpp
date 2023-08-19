#include "UTransformProvider.hpp"
#include "UTransform_StoryParticipantAnchor.hpp"
UTransform_StoryParticipantAnchor* UTransform_StoryParticipantAnchor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_StoryParticipantAnchor");
    return (UTransform_StoryParticipantAnchor*)res;
}
