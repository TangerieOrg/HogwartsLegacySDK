#include "UConversationPreset_RelativeInteractionActorTest.hpp"
#include "UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor.hpp"
UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor* UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor");
    return (UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor*)res;
}