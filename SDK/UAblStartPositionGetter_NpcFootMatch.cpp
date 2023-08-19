#include "UAblStartPositionGetter_FootMatch.hpp"
#include "UAblStartPositionGetter_NpcFootMatch.hpp"
UAblStartPositionGetter_NpcFootMatch* UAblStartPositionGetter_NpcFootMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_NpcFootMatch");
    return (UAblStartPositionGetter_NpcFootMatch*)res;
}
