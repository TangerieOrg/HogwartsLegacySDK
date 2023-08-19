#include "UConversationPreset_RelativeInteractionActorTest.hpp"
#include "UObject.hpp"
UConversationPreset_RelativeInteractionActorTest* UConversationPreset_RelativeInteractionActorTest::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationPreset_RelativeInteractionActorTest");
    return (UConversationPreset_RelativeInteractionActorTest*)res;
}
