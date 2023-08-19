#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_AnimNotify.hpp"
UAblStartPositionGetter_AnimNotify* UAblStartPositionGetter_AnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_AnimNotify");
    return (UAblStartPositionGetter_AnimNotify*)res;
}
