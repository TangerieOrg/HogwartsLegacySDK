#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBookMark.hpp"
#include "UBookmarkBase.hpp"
UBookMark* UBookMark::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BookMark");
    return (UBookMark*)res;
}
