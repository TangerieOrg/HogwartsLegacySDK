#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolSkinFXAnyActive.hpp"
UFXAutoTriggerBoolSkinFXAnyActive* UFXAutoTriggerBoolSkinFXAnyActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSkinFXAnyActive");
    return (UFXAutoTriggerBoolSkinFXAnyActive*)res;
}
