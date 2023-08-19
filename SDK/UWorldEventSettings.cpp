#include "FSoftObjectPath.hpp"
#include "FWorldEventTimeSpan.hpp"
#include "UObject.hpp"
#include "UWorldEventSettings.hpp"
UWorldEventSettings* UWorldEventSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventSettings");
    return (UWorldEventSettings*)res;
}
