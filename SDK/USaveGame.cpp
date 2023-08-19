#include "UObject.hpp"
#include "USaveGame.hpp"
USaveGame* USaveGame::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SaveGame");
    return (USaveGame*)res;
}
