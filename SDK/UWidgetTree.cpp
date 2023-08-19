#include "UObject.hpp"
#include "UWidget.hpp"
#include "UWidgetTree.hpp"
UWidgetTree* UWidgetTree::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetTree");
    return (UWidgetTree*)res;
}
