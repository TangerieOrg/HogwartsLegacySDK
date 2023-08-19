#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#include "UCameraStackSpellCastTargetGetter.hpp"
UCameraStackSpellCastTargetGetter* UCameraStackSpellCastTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackSpellCastTargetGetter");
    return (UCameraStackSpellCastTargetGetter*)res;
}
