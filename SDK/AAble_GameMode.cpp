#include "AAble_GameMode.hpp"
#include "AGameMode.hpp"
AAble_GameMode* AAble_GameMode::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.Able_GameMode");
    return (AAble_GameMode*)res;
}
