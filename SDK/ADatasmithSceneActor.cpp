#include "AActor.hpp"
#include "ADatasmithSceneActor.hpp"
#include "UDatasmithScene.hpp"
ADatasmithSceneActor* ADatasmithSceneActor::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithSceneActor");
    return (ADatasmithSceneActor*)res;
}
