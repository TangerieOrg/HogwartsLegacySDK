#include "FObjectArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UObjectArchitectAsset.hpp"
UObjectArchitectAsset* UObjectArchitectAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.ObjectArchitectAsset");
    return (UObjectArchitectAsset*)res;
}
