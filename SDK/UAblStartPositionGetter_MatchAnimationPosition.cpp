#include "UAblStartPositionGetter.hpp"
#include "UAblStartPositionGetter_MatchAnimationPosition.hpp"
#include "UMatchAnimationPositionCharacterGetter.hpp"
UAblStartPositionGetter_MatchAnimationPosition* UAblStartPositionGetter_MatchAnimationPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_MatchAnimationPosition");
    return (UAblStartPositionGetter_MatchAnimationPosition*)res;
}
