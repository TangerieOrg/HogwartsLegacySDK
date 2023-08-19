#include "AChaosCacheManager.hpp"
#include "AChaosCachePlayer.hpp"
AChaosCachePlayer* AChaosCachePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCaching.ChaosCachePlayer");
    return (AChaosCachePlayer*)res;
}
