#include "UAkAudioEvent.hpp"
#include "UAnimMontage.hpp"
#include "UDataAsset.hpp"
#include "UToolAsset_Ammo.hpp"
UToolAsset_Ammo* UToolAsset_Ammo::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.ToolAsset_Ammo");
    return (UToolAsset_Ammo*)res;
}
