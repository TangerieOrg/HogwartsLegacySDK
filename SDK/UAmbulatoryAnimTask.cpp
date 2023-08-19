#include "UAmbulatoryAnimTask.hpp"
#include "UObject.hpp"
UAmbulatoryAnimTask* UAmbulatoryAnimTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AmbulatoryAnimTask");
    return (UAmbulatoryAnimTask*)res;
}
