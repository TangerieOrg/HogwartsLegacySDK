#include "AGameSession.hpp"
#include "AInfo.hpp"
AGameSession* AGameSession::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameSession");
    return (AGameSession*)res;
}
