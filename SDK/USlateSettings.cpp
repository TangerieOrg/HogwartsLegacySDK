#include "UObject.hpp"
#include "USlateSettings.hpp"
USlateSettings* USlateSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.SlateSettings");
    return (USlateSettings*)res;
}
