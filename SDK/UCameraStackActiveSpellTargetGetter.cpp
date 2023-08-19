#include "UCameraStackActiveSpellTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackActiveSpellTargetGetter* UCameraStackActiveSpellTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackActiveSpellTargetGetter");
    return (UCameraStackActiveSpellTargetGetter*)res;
}
