#include "EBool_PlayerHouse.hpp"
#include "UBoolProvider.hpp"
#include "UBool_PlayerHouse.hpp"
UBool_PlayerHouse* UBool_PlayerHouse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_PlayerHouse");
    return (UBool_PlayerHouse*)res;
}
