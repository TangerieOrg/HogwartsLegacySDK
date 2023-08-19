#include "UObject.hpp"
#include "UPerceptionTextureCacheItem.hpp"
#include "UTexture2D.hpp"
UPerceptionTextureCacheItem* UPerceptionTextureCacheItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionTextureCacheItem");
    return (UPerceptionTextureCacheItem*)res;
}
