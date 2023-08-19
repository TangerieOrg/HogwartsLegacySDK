#include "UDLSSSettings.hpp"
#include "UObject.hpp"
UDLSSSettings* UDLSSSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/DLSS.DLSSSettings");
    return (UDLSSSettings*)res;
}
