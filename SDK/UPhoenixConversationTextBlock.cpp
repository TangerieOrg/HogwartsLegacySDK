#include "UPhoenixConversationTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
UPhoenixConversationTextBlock* UPhoenixConversationTextBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixConversationTextBlock");
    return (UPhoenixConversationTextBlock*)res;
}
