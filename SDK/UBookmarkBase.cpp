#include "UBookmarkBase.hpp"
#include "UObject.hpp"
UBookmarkBase* UBookmarkBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BookmarkBase");
    return (UBookmarkBase*)res;
}
