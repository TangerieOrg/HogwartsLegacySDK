#include "ULevelData.hpp"
#include "UObject.hpp"
ULevelData* ULevelData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LevelData");
    return (ULevelData*)res;
}
