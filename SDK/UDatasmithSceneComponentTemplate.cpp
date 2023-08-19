#include "EComponentMobility\Type.hpp"
#include "FTransform.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithSceneComponentTemplate.hpp"
UDatasmithSceneComponentTemplate* UDatasmithSceneComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithSceneComponentTemplate");
    return (UDatasmithSceneComponentTemplate*)res;
}
