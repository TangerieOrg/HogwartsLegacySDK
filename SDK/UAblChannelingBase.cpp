#include "UAblChannelingBase.hpp"
#include "UObject.hpp"
UAblChannelingBase* UAblChannelingBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblChannelingBase");
    return (UAblChannelingBase*)res;
}
