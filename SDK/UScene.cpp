#include "UObject.hpp"
#include "UScene.hpp"
UScene* UScene::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Scene");
    return (UScene*)res;
}
