#include "UBoolProvider.hpp"
#include "UBool_ByStat.hpp"
UBool_ByStat* UBool_ByStat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Bool_ByStat");
    return (UBool_ByStat*)res;
}
