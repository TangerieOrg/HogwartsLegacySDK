#include "UListViewDesignerPreviewItem.hpp"
#include "UObject.hpp"
UListViewDesignerPreviewItem* UListViewDesignerPreviewItem::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ListViewDesignerPreviewItem");
    return (UListViewDesignerPreviewItem*)res;
}
