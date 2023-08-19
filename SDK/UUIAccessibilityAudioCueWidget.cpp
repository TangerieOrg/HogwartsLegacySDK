#include "UUIAccessibilityAudioCueWidget.hpp"
#include "UUserWidget.hpp"
UUIAccessibilityAudioCueWidget* UUIAccessibilityAudioCueWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIAccessibilityAudioCueWidget");
    return (UUIAccessibilityAudioCueWidget*)res;
}
