#include "UAblStartPositionGetter_MatchAnimationPosition.hpp"
#include "UAblStartPositionGetter_MountRider.hpp"
#include "UClass.hpp"
UAblStartPositionGetter_MountRider* UAblStartPositionGetter_MountRider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblStartPositionGetter_MountRider");
    return (UAblStartPositionGetter_MountRider*)res;
}
