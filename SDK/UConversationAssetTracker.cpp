#include "UConversationAssetTracker.hpp"
#include "UInterface.hpp"
UConversationAssetTracker* UConversationAssetTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.ConversationAssetTracker");
    return (UConversationAssetTracker*)res;
}
