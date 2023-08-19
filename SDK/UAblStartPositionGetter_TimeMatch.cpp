#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_TimeMatch.hpp"
UAblStartPositionGetter_TimeMatch* UAblStartPositionGetter_TimeMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_TimeMatch");
    return (UAblStartPositionGetter_TimeMatch*)res;
}
