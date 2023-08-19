#include "UAblStartPositionGetter.hpp"
#include "UablStartPositionGetter_NPCSpawnAnim.hpp"
UablStartPositionGetter_NPCSpawnAnim* UablStartPositionGetter_NPCSpawnAnim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablStartPositionGetter_NPCSpawnAnim");
    return (UablStartPositionGetter_NPCSpawnAnim*)res;
}
