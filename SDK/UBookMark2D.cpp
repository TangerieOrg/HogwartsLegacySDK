#include "FIntPoint.hpp"
#include "UBookMark2D.hpp"
#include "UBookmarkBase.hpp"
UBookMark2D* UBookMark2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BookMark2D");
    return (UBookMark2D*)res;
}
