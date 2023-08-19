#include "USubtitle_HUD.hpp"
#include "UUserWidget.hpp"
USubtitle_HUD* USubtitle_HUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Subtitle_HUD");
    return (USubtitle_HUD*)res;
}
