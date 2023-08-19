#include "FVector.hpp"
#include "UMerSettings.hpp"
#include "UObject.hpp"
UMerSettings* UMerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MerSettings");
    return (UMerSettings*)res;
}
