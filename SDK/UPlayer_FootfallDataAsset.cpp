#include "FPlayer_FootfallData.hpp"
#include "UDataAsset.hpp"
#include "UPlayer_FootfallDataAsset.hpp"
UPlayer_FootfallDataAsset* UPlayer_FootfallDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Player_FootfallDataAsset");
    return (UPlayer_FootfallDataAsset*)res;
}
