#include "UMapSubSystem.hpp"
#include "UMiniMapPerceptionIcons.hpp"
#include "UMinimapBase.hpp"
#include "UMinimapManager.hpp"
#include "UObject.hpp"
#include "UPerceptionDrawQueueItem.hpp"
#include "UPerceptionIconData.hpp"
#include "UPerceptionTextureCacheItem.hpp"
#include "UTexture2D.hpp"
#include "UTextureUtil.hpp"
UMiniMapPerceptionIcons* UMiniMapPerceptionIcons::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MiniMapPerceptionIcons");
    return (UMiniMapPerceptionIcons*)res;
}
