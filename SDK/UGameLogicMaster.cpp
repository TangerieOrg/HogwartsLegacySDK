#include "UGameLogicGameSettings.hpp"
#include "UGameLogicMaster.hpp"
#include "UObject.hpp"
UGameLogicMaster* UGameLogicMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicMaster");
    return (UGameLogicMaster*)res;
}
