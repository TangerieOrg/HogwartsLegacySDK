#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_MatchPrevious.hpp"
UAblStartPositionGetter_MatchPrevious* UAblStartPositionGetter_MatchPrevious::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_MatchPrevious");
    return (UAblStartPositionGetter_MatchPrevious*)res;
}
