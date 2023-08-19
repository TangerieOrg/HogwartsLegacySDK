#include "UDatasmithScene.hpp"
#include "UObject.hpp"
UDatasmithScene* UDatasmithScene::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithScene");
    return (UDatasmithScene*)res;
}
