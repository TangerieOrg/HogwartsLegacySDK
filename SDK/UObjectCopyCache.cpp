#include "UObject.hpp"
#include "UObjectCopyCache.hpp"
UObjectCopyCache* UObjectCopyCache::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectCopyCache");
    return (UObjectCopyCache*)res;
}
