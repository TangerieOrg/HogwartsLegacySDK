#include "UDataAsset.hpp"
#include "UTimeSourceScrubbableControlBase.hpp"
UTimeSourceScrubbableControlBase* UTimeSourceScrubbableControlBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceScrubbableControlBase");
    return (UTimeSourceScrubbableControlBase*)res;
}
