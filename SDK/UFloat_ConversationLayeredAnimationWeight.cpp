#include "FConversationLayeredAnimationWeight.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_ConversationLayeredAnimationWeight.hpp"
UFloat_ConversationLayeredAnimationWeight* UFloat_ConversationLayeredAnimationWeight::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_ConversationLayeredAnimationWeight");
    return (UFloat_ConversationLayeredAnimationWeight*)res;
}
