#include "UAISenseConfig.hpp"
#include "UAISenseConfig_GameEvent.hpp"
#include "UClass.hpp"
#include "UPlayer_FootfallDataAsset.hpp"
UAISenseConfig_GameEvent* UAISenseConfig_GameEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_GameEvent");
    return (UAISenseConfig_GameEvent*)res;
}
