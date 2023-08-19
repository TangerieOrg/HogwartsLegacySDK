#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskWaitForPlayer.hpp"
UAIPerformTaskWaitForPlayer* UAIPerformTaskWaitForPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskWaitForPlayer");
    return (UAIPerformTaskWaitForPlayer*)res;
}
