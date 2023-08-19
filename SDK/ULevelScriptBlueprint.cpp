#include "UBlueprint.hpp"
#include "ULevelScriptBlueprint.hpp"
ULevelScriptBlueprint* ULevelScriptBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelScriptBlueprint");
    return (ULevelScriptBlueprint*)res;
}
