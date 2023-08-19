#include "UObject.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
USlateWidgetStyleAsset* USlateWidgetStyleAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.SlateWidgetStyleAsset");
    return (USlateWidgetStyleAsset*)res;
}
