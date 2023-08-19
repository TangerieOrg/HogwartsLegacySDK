#include "UAblStartPositionGetter.hpp"
#include "UablStartPositionGetter_TrollSwing.hpp"
UablStartPositionGetter_TrollSwing* UablStartPositionGetter_TrollSwing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablStartPositionGetter_TrollSwing");
    return (UablStartPositionGetter_TrollSwing*)res;
}
