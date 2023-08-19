#include "FConversationLayeredAnimationWeightEntry.hpp"
#include "UConversationLayeredAnimationWeights.hpp"
#include "UDataAsset.hpp"
UConversationLayeredAnimationWeights* UConversationLayeredAnimationWeights::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ConversationLayeredAnimationWeights");
    return (UConversationLayeredAnimationWeights*)res;
}
