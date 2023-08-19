#include "EGenderEnum.hpp"
#include "UBoolProvider.hpp"
#include "UBool_PlayerGenderRig.hpp"
UBool_PlayerGenderRig* UBool_PlayerGenderRig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_PlayerGenderRig");
    return (UBool_PlayerGenderRig*)res;
}
