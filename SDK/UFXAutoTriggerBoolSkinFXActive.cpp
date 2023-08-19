#include "UClass.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolSkinFXActive.hpp"
UFXAutoTriggerBoolSkinFXActive* UFXAutoTriggerBoolSkinFXActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSkinFXActive");
    return (UFXAutoTriggerBoolSkinFXActive*)res;
}
