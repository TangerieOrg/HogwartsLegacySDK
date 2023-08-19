#include "FSoftObjectPath.hpp"
#include "UClass.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UTutorialPreCacheEntry.hpp"
UTutorialPreCacheEntry* UTutorialPreCacheEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TutorialPreCacheEntry");
    return (UTutorialPreCacheEntry*)res;
}
