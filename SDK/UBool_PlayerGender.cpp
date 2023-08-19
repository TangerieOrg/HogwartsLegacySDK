#include "ESexType.hpp"
#include "UBoolProvider.hpp"
#include "UBool_PlayerGender.hpp"
UBool_PlayerGender* UBool_PlayerGender::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_PlayerGender");
    return (UBool_PlayerGender*)res;
}
