#include "UObject.hpp"
#include "USendTargetUtil.hpp"
USendTargetUtil* USendTargetUtil::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SendTargetUtil");
    return (USendTargetUtil*)res;
}
