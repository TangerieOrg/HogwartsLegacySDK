#include "FDbSingleColumnInfo.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_Lock.hpp"
UWorldEventCondition_Lock* UWorldEventCondition_Lock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_Lock");
    return (UWorldEventCondition_Lock*)res;
}
