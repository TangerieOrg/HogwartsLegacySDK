#include "UDataAsset.hpp"
#include "UMunition.hpp"
UMunition* UMunition::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.Munition");
    return (UMunition*)res;
}
