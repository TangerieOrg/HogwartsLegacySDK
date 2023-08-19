#include "ESlateAccessibleBehavior.hpp"
#include "UObject.hpp"
#include "USlateAccessibleWidgetData.hpp"
USlateAccessibleWidgetData* USlateAccessibleWidgetData::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SlateAccessibleWidgetData");
    return (USlateAccessibleWidgetData*)res;
}
