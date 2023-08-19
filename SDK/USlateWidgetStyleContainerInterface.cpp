#include "UInterface.hpp"
#include "USlateWidgetStyleContainerInterface.hpp"
USlateWidgetStyleContainerInterface* USlateWidgetStyleContainerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.SlateWidgetStyleContainerInterface");
    return (USlateWidgetStyleContainerInterface*)res;
}
