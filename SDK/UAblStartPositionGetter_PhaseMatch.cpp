#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_PhaseMatch.hpp"
UAblStartPositionGetter_PhaseMatch* UAblStartPositionGetter_PhaseMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_PhaseMatch");
    return (UAblStartPositionGetter_PhaseMatch*)res;
}
