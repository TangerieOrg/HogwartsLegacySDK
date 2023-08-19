#include "UObject.hpp"
#include "UPerceptionDrawQueueItem.hpp"
#include "UPerceptionIconData.hpp"
UPerceptionDrawQueueItem* UPerceptionDrawQueueItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionDrawQueueItem");
    return (UPerceptionDrawQueueItem*)res;
}
