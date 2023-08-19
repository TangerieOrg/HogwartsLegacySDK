#include "FPreloadArchitectHUDStyle.hpp"
#include "UPreloadArchitectHUDWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UPreloadArchitectHUDWidgetStyle* UPreloadArchitectHUDWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.PreloadArchitectHUDWidgetStyle");
    return (UPreloadArchitectHUDWidgetStyle*)res;
}
