#include "UObject.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
USlateWidgetStyleContainerBase* USlateWidgetStyleContainerBase::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.SlateWidgetStyleContainerBase");
    return (USlateWidgetStyleContainerBase*)res;
}
