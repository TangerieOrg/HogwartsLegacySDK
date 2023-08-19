#include "UAllCalcViewInfo.hpp"
#include "UObject.hpp"
UAllCalcViewInfo* UAllCalcViewInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/GetCamera.AllCalcViewInfo");
    return (UAllCalcViewInfo*)res;
}
