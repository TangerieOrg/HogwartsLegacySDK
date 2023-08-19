#include "UCameraStackDuelingPartnerTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackDuelingPartnerTargetGetter* UCameraStackDuelingPartnerTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackDuelingPartnerTargetGetter");
    return (UCameraStackDuelingPartnerTargetGetter*)res;
}
