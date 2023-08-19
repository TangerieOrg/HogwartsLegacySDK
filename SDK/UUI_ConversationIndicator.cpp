#include "UUI_ConversationIndicator.hpp"
#include "UUI_InGameIndicatorComponent.hpp"
UUI_ConversationIndicator* UUI_ConversationIndicator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UI_ConversationIndicator");
    return (UUI_ConversationIndicator*)res;
}
