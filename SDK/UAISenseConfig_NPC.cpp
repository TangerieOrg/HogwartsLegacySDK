#include "UAISenseConfig.hpp"
#include "UAISenseConfig_NPC.hpp"
UAISenseConfig_NPC* UAISenseConfig_NPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_NPC");
    return (UAISenseConfig_NPC*)res;
}
