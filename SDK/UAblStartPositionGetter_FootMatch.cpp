#include "FVector.hpp"
#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_FootMatch.hpp"
UAblStartPositionGetter_FootMatch* UAblStartPositionGetter_FootMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_FootMatch");
    return (UAblStartPositionGetter_FootMatch*)res;
}
