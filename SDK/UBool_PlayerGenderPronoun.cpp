#include "EGenderPronoun.hpp"
#include "UBoolProvider.hpp"
#include "UBool_PlayerGenderPronoun.hpp"
UBool_PlayerGenderPronoun* UBool_PlayerGenderPronoun::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_PlayerGenderPronoun");
    return (UBool_PlayerGenderPronoun*)res;
}
